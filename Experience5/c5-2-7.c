/*c5-2-7.c*/
#include <math.h>
#include <stdio.h>
int main()
{
    int m, n, sum = 0;
    printf("请输入两个正整数:");
    scanf("%d %d", &m, &n);

    if (m > n) {
        int temp = m;
        m = n;
        n = temp;
    }

    for (int i = m; i <= n; i++) {
        if (i % 3 != 0 && i % 7 != 0) {
            sum += i;
        }
    }
    printf("Sum is :%d\n", sum);
    return 0;
}