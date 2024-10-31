/*c6-1-1.c*/
#include <stdio.h>
int main()
{
    int i, j;
    i = 1;
    for (j = 1; j <= i; j++)
        printf("%2d*%2d=%2d", i, j, i * j);
    printf("\n");
    return 0;
}
