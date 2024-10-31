#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0; i <= 3; i++) {
        if (i != 0) {
            for (j = 0; j <= 10 - 2 * i; j++)
                printf(" ");
            for (k = 0; k <= 4 * i; k++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}