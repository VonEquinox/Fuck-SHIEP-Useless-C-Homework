#include <stdio.h>
#define N 3
int main ()
{
    int i, j, k, flag = 0;
    int a[N][N] = {};
    int b[N][N] = {};
    int c[N][N] = {};
    printf ("输入%d阶的矩阵1:\n", N);
    for (i = 0; i < N; i++) for (j = 0; j < N; j++) scanf ("%d", &a[i][j]);
    printf ("输入%d阶的矩阵2:\n", N);
    for (i = 0; i < N; i++) for (j = 0; j < N; j++) scanf ("%d", &b[i][j]);
    for (i = 0; i < N; i++) for (j = 0; j < N; j++) for (k = 0; k < N; k++) c[i][j] += a[i][k] * b[k][j];
    printf ("两矩阵乘积为:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++) printf ("%d\t", c[i][j]);
        printf ("\n");
    }
    return 0;
}