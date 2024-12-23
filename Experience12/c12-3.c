/*c12-3.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct List {
    int num;
    char name[20];
    struct List *next;
};
struct List *H_creat_list()
{
    struct List *head = NULL, *tail = NULL;
    int i;
    printf("Enter the number of nodes: ");
    scanf("%d", &i);
    for (int j = 0; j < i; j++) {
        struct List *newNode = (struct List *)malloc(sizeof(struct List));
        printf("Enter student number[%d]: ", j + 1);
        scanf("%d", &newNode->num);
        printf("Enter student name[%d]: ", j + 1);
        scanf("%s", newNode->name);
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}
void print(struct List *head)
{
    struct List *p = head;
    while (p != NULL) {
        printf("%d %s ", p->num, p->name);
        p = p->next;
    }
    printf("\n");
}
struct List *insert_Node_k(struct List *head, int num, char name[], int k)
{
    struct List *newNode = (struct List *)malloc(sizeof(struct List));
    strcpy(newNode->name, name);
    newNode->num = num;
    newNode->next = NULL;
    if (k == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        struct List *p = head, *prev = NULL;
        int count = 1;
        while (p != NULL && count != k) {
            prev = p;
            p = p->next;
            count++;
        }
        prev->next = newNode;
        newNode->next = p;
    }
    return head;
}
struct List *Del_Node_x(struct List *head, int x)
{
    struct List *p = head, *prev = NULL;
    while (p != NULL && p->num != x) {
        prev = p;
        p = p->next;
    }
    if (p == NULL) {
        printf("Student number %d not found.\n", x);
        return head;
    } else {
        if (prev == NULL) {
            head = p->next;
        } else {
            prev->next = p->next;
        }
        free(p);
    }
    return head;
}