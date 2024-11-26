#include <stdio.h>
int main ()
{
    /************found************/
    int a[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, i, j, t;
    printf ("矩阵a: \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            printf ("%5d", a[i][j]);
        printf ("\n");
    }
    for (i = 0; i < 3; i++)
        /************found************/
        for (j = 1; j < 3; j++)
        {
            t = a[i][j];
            /************found************/
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    printf ("转置后矩阵: \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            printf ("%5d", a[i][j]);
        printf ("\n");
    }
    return 0;
}