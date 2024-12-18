/*c11-2-4.c*/
#include <stdio.h>
#include <stdlib.h>
struct student {
    int num;
    char name[20];
    float score;
};
int main()
{
    struct student *stu;
    int i, imax = 0, n;
    printf("输入人数:");
    scanf("%d", &n);
    stu = (struct student *)malloc(sizeof(struct student) * n);
    printf("输入学生信息:\n");
    for (i = 0; i < n; i++)
        scanf("%d %s %f", &stu[i].num, &stu[i].name, &stu[i].score);
    imax = 0;
    for (i = 1; i < n; i++) {
        if (stu[imax].score < stu[i].score)
            imax = i;
    }
    printf("\n最高分:\n");
    printf("学号:%d\t姓名:%s\t成绩:%4.1f\n", stu[imax].num, stu[imax].name, stu[imax].score);
    return 0;
}