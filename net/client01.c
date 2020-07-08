#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main()
{
    struct sockaddr_in serv_addr;
    char request[1000];
    char response[1000];
    int clifd;
    int ret;

    // socket
    clifd = socket(AF_INET, SOCK_STREAM, 0);
    if (clifd < 0) {
        printf("sockfd err\n");
        return -1;
    }

    // connect
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr("192.168.100.3");
    serv_addr.sin_port = htons(8888);
    ret = connect(clifd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
    if (ret != 0) {
        printf("connect err\n");
        return -1;
    }

    // write
    memset(request, 0, sizeof(request));
    strcpy(request, "Hello World\n");
    ret = write(clifd, request, sizeof(request));
    if (ret < 0) {
        printf("write err\n");
        return -1;
    }

    // read
    memset(response, 0, sizeof(request));
    ret = read(clifd, response, sizeof(response));
    if (ret < 0) {
        printf("read err\n");
        return -1;
    }
    
    close(clifd);

    return 0;
}