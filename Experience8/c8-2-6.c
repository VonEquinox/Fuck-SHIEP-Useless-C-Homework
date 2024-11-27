#include <stdio.h>
#define N 3
int main ()
{
    int a[N][N];
    printf ("输入%d阶的矩阵:\n", N);
    for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) scanf ("%d", &a[i][j]);
    int flag = 0;
    for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) if (a[i][j] != a[j][i])
    {
        flag = 1;
        break;
    }
    if (flag) printf ("这不是对称矩阵");
    else printf ("这是对称矩阵");
    return 0;
}