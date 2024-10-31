/*c6-2-1.c*/
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0; i <= 3; i++) {
        for (j = 0; j <= i; j++)
            printf(" ");
        for (k = 0; k <= 6 - 2 * i; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}