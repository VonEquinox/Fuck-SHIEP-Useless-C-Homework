/*c11-2-3.c*/
#include <stdio.h>
#include <string.h>
struct person {
    char name[20];
    int count;
};
int main()
{
    struct person stu[3] = {"zhang", 0, "wang", 0, "li", 0};
    int i = 0, j = 0;
    char leader_name[20];
    for (i = 0; i < 10; i++) {
        printf("输入得票人姓名:");
        scanf("%s", leader_name);
        for (j = 0; j < 3; j++)
            if (strcmp(leader_name, stu[j].name) == 0)
                stu[j].count++;
    }
    printf("\n得票统计结果:\n");
    for (i = 0; i < 3; i++)
        printf("%5s:%d\n", stu[i].name, stu[i].count);
    return 0;
}