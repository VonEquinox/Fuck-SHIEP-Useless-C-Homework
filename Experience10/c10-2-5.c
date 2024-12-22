#include <stdio.h>
/************found************/
int findmax (int s[], int n)
{
    /************found************/
    int j, p;
    p = 0;
    for (j = 1; j < n; j++) {
        if (s[j] > s[p])
            p = j;
    }
    /************found************/
    return p;
}
int main ()
{
    int a[10], i, k;
    printf ("请输入数组元素: ");
    for (i = 0; i < 10; i++)
        scanf ("%d", &a[i]);
    k = findmax (a, 10);
    printf ("最大元素所在下标为: %d, 最大元素为%d\n", k, a[k]);
    return 0;
}