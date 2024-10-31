#include<stdio.h>

int main()
{
    double r,area,circu;
    printf("Input r:");
    scanf("%lf",&r);
    area = 3.1415926*r*r;
    circu = 2 * 3.1415926 * r;
    printf("%lf,%lf,%lf",r,area,circu);
    return 0;
}