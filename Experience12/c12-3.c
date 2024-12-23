/*c12-3.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义链表节点结构体
struct List {
    int num;
    char name[20];
    struct List *next;
};

// 1. 创建单链表
struct List *H_creat_list() {
    struct List *head = NULL; // 头指针初始化为空
    struct List *p = NULL;    // 用于创建新节点的指针
    struct List *tail = NULL; // 尾指针，用于连接新节点

    int num;
    char name[20];

    printf("请输入学生信息 (学号 姓名)，输入学号为0结束输入：\n");
    while (scanf("%d", &num) == 1 && num != 0) {
        scanf("%s", name);

        // 创建新节点
        p = (struct List *)malloc(sizeof(struct List));
        if (p == NULL) {
            printf("内存分配失败!\n");
            exit(1);
        }
        p->num = num;
        strcpy(p->name, name);
        p->next = NULL;

        // 连接节点
        if (head == NULL) {
            head = p; // 如果是第一个节点，头指针指向它
        } else {
            tail->next = p; // 否则，将新节点连接到尾节点的后面
        }
        tail = p; // 更新尾指针
    }

    return head; // 返回头指针
}

// 2. 输出单链表
void print(struct List *head) {
    struct List *p = head;
    printf("单链表内容：\n");
    while (p != NULL) {
        printf("学号: %d, 姓名: %s\n", p->num, p->name);
        p = p->next;
    }
}

// 3. 在指定位置插入节点
struct List *insert_Node_k(struct List *head, int num, char name[], int k) {
    struct List *p = head;
    struct List *newNode = (struct List *)malloc(sizeof(struct List));
    if (newNode == NULL) {
        printf("内存分配失败!\n");
        exit(1);
    }
    newNode->num = num;
    strcpy(newNode->name, name);
    newNode->next = NULL;

    if (k <= 0) {
        printf("插入位置无效\n");
        return head;
    }

    if (k == 1) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    int count = 1;
    while (p != NULL && count < k - 1) {
        p = p->next;
        count++;
    }

    if (p == NULL) {
        printf("插入位置超出链表长度\n");
        return head;
    }

    newNode->next = p->next;
    p->next = newNode;

    return head;
}

// 4. 删除指定学号的节点
struct List *Del_Node_x(struct List *head, int x) {
    struct List *p = head;
    struct List *prev = NULL;

    while (p != NULL && p->num != x) {
        prev = p;
        p = p->next;
    }

    if (p == NULL) {
        printf("未找到学号为 %d 的节点\n", x);
        return head;
    }

    if (prev == NULL) {
        head = p->next; // 如果要删除的是头节点
    } else {
        prev->next = p->next; // 将前一个节点的 next 指针指向要删除节点的下一个节点
    }

    free(p); // 释放被删除节点的内存
    return head;
}

int main() {
    struct List *head = NULL;

    // 创建链表
    head = H_creat_list();

    // 输出链表
    print(head);

    // 插入节点
    int insertNum, insertK;
    char insertName[20];
    printf("请输入要插入的学号、姓名和位置：\n");
    scanf("%d %s %d", &insertNum, insertName, &insertK);
    head = insert_Node_k(head, insertNum, insertName, insertK);
    print(head);

    // 删除节点
    int deleteNum;
    printf("请输入要删除的学号：\n");
    scanf("%d", &deleteNum);
    head = Del_Node_x(head, deleteNum);
    print(head);

    // 释放链表内存 (重要!)
    while (head != NULL) {
        struct List *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}