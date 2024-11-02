/*  c5-2-6.c  */
#include <math.h>
#include <stdio.h>
int main()
{
    int n, m, t;
    printf("please enter two number:");
    scanf("%d%d", &n, &m);
    if (n < m) {
        t = n;
        n = m;
        m = t;
    }
    t = n % m;
    /************found***********/
    while (t != 0) {
        n = m;
        m = t;
        /************found***********/
        t = n % m;
    }
    /************found***********/
    printf("the greatest common divisor is:%d\n", m);
    return 0;
}
