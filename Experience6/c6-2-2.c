/*c6-2-2.c*/
#include <math.h>
#include <stdio.h>
int main()
{
    int i, j, flag, sum = 0;
    for (i = 100; i <= 200; i++) {
        /************found***********/
        flag = i;
        for (j = 2; j <= i - 1; j++)
            /************found***********/
            if (i % j == 0) {
                flag = 1;
                break;
            }
        /************found***********/
        if (flag == i)
            sum += i;
    }
    printf("the sum is %d\n", sum);
    return 0;
}