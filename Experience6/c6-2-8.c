/*c6-2-8.c*/
#include <stdio.h>
int main()
{
    double a = 2;
    double b = 1;
    double c = a + b;
    double sum = 0;
    for (int i = 0; i < 20; i++) {
        sum += a / b;
        b = a;
        a = c;
        c = a + b;
    }
    printf("%lf",sum);
    return 0;
}