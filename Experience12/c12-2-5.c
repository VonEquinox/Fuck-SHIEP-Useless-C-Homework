#include <stdio.h>
int amax(int *a, int n)
{
    int max = 0;
    int *p;
    max = *a;
    for (p = a; p < a + n; p++)  // 2
        if (*p > max) max = *p;  // 3
    return max;
}
int main()
{
    int a[10];
    int *p;
    printf("Please input array a:\n");
    for (p = a; p < a + 10; p++)
        scanf("%d", p);  // 1
    printf("MAX = %d\n", amax(a, 10));
    return 0;
}