#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main()
{
    struct sockaddr_in cli_addr, serv_addr;
    socklen_t cli_len;
    int clifd, servfd;
    char request[1000], response[1000];
    int ret;

    // socket
    servfd = socket(AF_INET, SOCK_STREAM, 0);
    if (servfd < 0) {
        printf("socket err\n");
        return -1;
    }

    // bind
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr("192.168.100.3");
    serv_addr.sin_port = htons(8888);
    ret = bind(servfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
    if (ret < 0) {
        printf("bind err\n");
        return ret;
    }

    // listen
    ret = listen(servfd, 5);
    if (ret < 0) {
        printf("listen err\n");
        return ret;
    }

    // accept
    while (1) {
        memset(&cli_addr, 0, sizeof(cli_addr));
        clifd = accept(servfd, (struct sockaddr *)&cli_addr, &cli_len);
        if (clifd < 0) {
            close(servfd);
            printf("accept err\n");
            return -1;
        }
        printf("connecting\n");
        // read
        ret = read(clifd, request, sizeof(request));
        if (ret < 0) {
            printf("read err\n");
            continue;
        }
        printf("%s\n", request);

        // write
        strcpy(response, "HTTP/1.1 200 OK\nContent-Type: text/html\n\n<html>Hello World\n</html>");
        ret = write(clifd, response, sizeof(response));
        if (ret < 0) {
            printf("write err\n");
            continue;
        }
        close(clifd);
    }

    close(servfd);
    return 0;
}