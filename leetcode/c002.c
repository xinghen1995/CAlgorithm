#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *createList(int num)
{
    struct ListNode *root = NULL;
    struct ListNode *tail, *tmp;

    if (num == 0) {
        tmp = (struct ListNode *)malloc(sizeof(struct ListNode));
        if (tmp == NULL) {
            return NULL;
        }
        tmp->val = 0;
        tmp->next = NULL;
        root = tmp;
        return root;
    }

    while (num != 0) {
        tmp = (struct ListNode *)malloc(sizeof(struct ListNode));
        if (tmp == NULL) {
            return NULL;
        }
        tmp->val = num % 10;
        tmp->next = NULL;
        if (root == NULL) {
            root = tmp;
            tail = root;
        } else {
            tail->next = tmp;
            tail = tail->next;
        }
        num = num / 10;
    }
    return root;
}

void freeList(struct ListNode *l1)
{
    struct ListNode *cur, *next;
    
    cur = l1;
    while (cur != NULL) {
        next = cur->next;
        free(cur);
        cur = next;
    }
}

void trvalList(struct ListNode *l1)
{
    while (l1 != NULL) {
        printf("%d", l1->val);
        if (l1->next != NULL) {
            printf(" -> ");
        }
        l1 = l1->next;
    }
    printf("\n");
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int a, b, more;
    struct ListNode *root = NULL;
    struct ListNode *tmp, *tail;

    more = 0;
    while (l1 != NULL || l2 != NULL) {
        if (l1 != NULL) {
            a = l1->val;
            l1 = l1->next;
        } else {
            a = 0;
        }
        if (l2 != NULL) {
            b = l2->val;
            l2 = l2->next;
        } else {
            b = 0;
        }
        tmp = (struct ListNode *)malloc(sizeof(struct ListNode));
        if (tmp == NULL) {
            return NULL;
        }
        tmp->val = (a + b + more) % 10;
        more = (a + b + more) / 10;
        tmp->next = NULL;

        if (root == NULL) {
            root = tmp;
            tail = root;
        } else {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    if (more != 0) {
        tmp = (struct ListNode *)malloc(sizeof(struct ListNode));
        if (tmp == NULL) {
            return NULL;
        }
        tmp->val = more;
        tmp->next = NULL;
        tail->next = tmp;
        tail = tail->next;
    }
    return root;
}

int main()
{
    int a = 10;
    int b = 20;
    struct ListNode *l1, *l2, *l3;

    l1 = createList(a);
    l2 = createList(b);
    l3 = addTwoNumbers(l1, l2);

    trvalList(l1);
    trvalList(l2);
    trvalList(l3);
    freeList(l1);
    freeList(l2);
    freeList(l3);    
    return 0;
}