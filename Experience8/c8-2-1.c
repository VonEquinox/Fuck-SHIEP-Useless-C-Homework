#include <stdio.h>
int main ()
{
    int a[4][4] = {{1, 2, 3, 4}, {3, 4, 5, 6}, {5, 6, 7, 8}, {7, 8, 9, 10}};
    int i, j, max, l, c;
    /************found************/
    max = a[0][0];
    for (i = 0;i < 4;i++)
        for (j = 0; j < 4; j++)
            /************found************/
            if (a[i][j] > max)
            {
                max = a[i][j];
                l = i;
                c = j;
            }
    printf ("max=%d, l=%d, c=%d\n", max, l, c);
    return 0;
}