/* c10-2-8.c */
#include <stdio.h>
int GCD(int m, int n)
{
    int i = 1, t, s;
    if (m < n) {
        t = m;
        m = n;
        n = t;
    }
    for (i = n; i > 0; i--) {
        if (m % i == 0 && n % i == 0) {
            s = i;
            return s;
        }
    }
}

int LCM(int m, int n)
{
    int s;
    s = m * n / GCD(m, n);
    return s;
}
int main()
{
    int a, b, r1, r2;
    printf("输入两个数字的数值：\n");
    scanf("%d%d", &a, &b);
    r1 = GCD(a, b);
    r2 = LCM(a, b);
    printf("\n两个数的最大公约数为:%d", r1);
    printf("\n两个数的最小公倍数数为:%d", r2);
    return 0;
}
