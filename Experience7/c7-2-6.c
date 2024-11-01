/*c7-2-6.c*/
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, sum = 0, b;
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0)
            sum += a[i];
    }
    printf("%d", sum);
    return 0;
}