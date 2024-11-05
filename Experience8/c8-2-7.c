#define N 3 // 可通过修改此处的值决定输入几阶矩阵
/*c8-2-7.c*/
#include <stdio.h>
int main()
{
    int i, j, flag = 0;
    int a[N][N] = {0};
    int b[N][N] = {0};
    int c[N][N] = {0};
    printf("输入%d阶的矩阵a:\n", N);
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
    printf("矩阵a为：\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("输入%d阶的矩阵b:\n", N);
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &b[i][j]);
    printf("矩阵b为：\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d\t", b[i][j]);
        printf("\n");
    }
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            c[i][j] = a[i][j] * b[i][j];
    printf("矩阵乘积为：\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
    return 0;
}