/*c6-2-1.c*/
#include <stdio.h>
int main()
{
    int i, j, k;
    /************found***********/
    for (i = 0; i <= 6; i = i + 2) {
        for (j = 0; j <= 10 - 0.5 * i; j++)
            printf(" ");
        /************found***********/
        for (k = 0; k <= i; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}