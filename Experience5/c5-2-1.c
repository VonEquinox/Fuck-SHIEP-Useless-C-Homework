/*   c5-2-1.c    */
#include <stdio.h>
#define M 100
int main()
{
    int a, b, i;
    a = 0;
    b = 0;
    for (i = 1; i <= 100; i += 2) {
        a = a + i;
        b = b + i + 1;
    }
    printf("偶数之和是：%d\n", b);
    printf("奇数之和是：%d\n", a);
    return 0;
}
