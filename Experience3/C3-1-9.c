#include<stdio.h>

int main() {
    int n = 100;
    float f;
    double d;

    f = n + 2.5;
    printf("f=%f\n", f);
    n = f / 2;
    printf("n=%d\n", n);

    n = (1 / 2) * f;
    printf("n=%d\n", n);

    d = f * 2;
    printf("d=%lf\n", d);

    return 0;
}