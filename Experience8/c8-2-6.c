#define N 3
/*c8-2-4.c*/
#include <stdio.h>
int main()
{
    int i, j, flag = 0;
    int a[N][N];
    printf("输入%d阶的矩阵:\n", N);
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (a[i][j] != a[j][i]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("这不是对称矩阵");
    else
        printf("这是对称矩阵");
    return 0;
}