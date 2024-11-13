/*c7-2-6.c*/
#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;
    int b = 0;
    for (int i = 0; i < 10; i+=2)
        sum += a[i];
    printf("%d\n", sum);
    return 0;
}
