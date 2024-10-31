/*  c5-2-4 .c  */
#include <stdio.h>
int main()
{
    float x, amax, amin;
    printf("请输入成绩（输入0时结束）：\n");
    scanf("%f", &x);
    /************found***********/
    amax = 0;
    amin = 100;
    /************found***********/
    while (x != 0) {
        if (x > amax)
            amax = x;
        /************found***********/
        else if (x < amin)
            amin = x;
        scanf("%f", &x);
    }
    printf("\namax=%f\namin=%f\n", amax, amin);
    return 0;
}