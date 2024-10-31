/*c5-2-10.c*/
#include <stdio.h>

int main()
{
    double pi = 0;
    double temp = 999999999999;
    int i = 1;
    while (temp > 1e-6) {
        temp = 1.0 / (i * (i + 2));
        if(!pi)
            pi += 1 + temp;
        else
            pi *= 1 + temp;
        i += 2;
    }
    printf("%f",pi*2);
    return 0;
}