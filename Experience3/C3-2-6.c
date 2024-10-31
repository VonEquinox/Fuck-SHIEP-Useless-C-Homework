#include <stdio.h>

int main()
{
    float r = 1.5,h=3;
    scanf("%f",&r);
    scanf("%f",&h);
    printf("周长:%.2f",3.1415926 * r * 2);
    printf("面积:%.2f",3.1415926 * r * r);
    printf("体积:%.2f",3.1415926 * r * r * h);
    return 0;
}