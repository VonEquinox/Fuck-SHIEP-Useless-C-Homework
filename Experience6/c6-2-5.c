/*c6-2-5.c*/
#include <math.h>
#include <stdio.h>
int main()
{
    double sum = 0;
    for (int i = 1; i <= 20; i++) {
        int t = 1;
        for (int j = 1; j <= i; j++)
            t *= j;
        sum += (1.0 / t);
    }
    printf("%.15lf\n", sum);

    return 0;
}