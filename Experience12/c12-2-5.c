/*c12-2-5.c*/
#include <stdio.h>
int amax(int *a, int n)
{
    int max = 0;
    int *p;
    max = *a;
    for (p = a; p < a + n; p++)
        if (*p > max)
            max = *p;
    return max;
}
int main()
{
    int a[10];
    int *p;
    printf("input array a:");
    for (p = a; p < a + 10; p++)
        scanf("%d", p);
    printf("MAX = %d\n", amax(a, 10));
    return 0;
}