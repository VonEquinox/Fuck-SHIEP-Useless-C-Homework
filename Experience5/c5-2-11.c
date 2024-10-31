/*c5-2-11.c*/
#include <stdio.h>
#include <math.h>

int main()
{
    double poorgive = 0;
    double richgive = 0;
    for (int i = 0; i < 30; i++) {
        poorgive += 100000;
        richgive += 0.01*pow(2,i);
    }
    printf("穷人给:%lf,富人给:%lf",poorgive,richgive);  
    return 0;
}