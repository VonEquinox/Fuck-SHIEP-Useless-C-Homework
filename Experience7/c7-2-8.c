/*c7-2-8.c*/
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b = 0;
    printf("输入数字:");
    scanf("%d", &b);
    int flag = 0;
    int index = 0;
    for (int i = 0; i < 11; i++) {
        if (b == a[i]) {
            flag = 1;
            index = i;
            break;
        }
    }

    if (flag) {
        printf("数组中存在\n");
        for (int i = index + 1; i < 11; i++)
            a[i - 1] = a[i];
        for (int i = 0; i < 9; i++)
            printf("%d ",a[i]);
    } else {
        printf("数组中不存在\n");
        for (int i = 0; i < 10; i++)
            printf("%d ",a[i]);
    }
    return 0;
}