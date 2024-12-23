/*c12-2-3.c*/
#include <stdio.h>
int amax(int a[], int n)
{
    int max = 0, i = 0;
    max = a[0];
    for (i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
int main()
{
    int a[10];
    int i = 0;
    printf("input array a:");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("MAX = %d\n", amax(a, 10));
    return 0;
}