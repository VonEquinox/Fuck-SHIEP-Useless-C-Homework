#include <stdio.h>
#include <string.h>

#define N 80

void select_sort (int arr[], int n)
{
    int r[N], i, k, p, j;
    for (j = 0; j < n; j++) {
        r[j] = arr[0];
        k = 0;
        for (i = 0; i < n - j; i++) if (r[j] > arr[i]) {
            r[j] = arr[i];
            k = i;
        }
        arr[k] = 0;
        for (p = k; p < n - j - 1; p++) arr[p] = arr[p + 1];
    }
    printf ("\n输出排序后结果:\n");
    for (j = 0; j < n; j++) printf ("\nr[%d]=%d", j, r[j]);
}

int main ()
{
    int a[N] = {0};
    int n = 0;
    int i = 0;
    printf ("输入数组一共有多少数: ");
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        printf ("\na[%d]=", i);
        scanf ("%d", &a[i]);
    }
    select_sort (a, n);
    return 0;
}