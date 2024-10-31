/*c5-2-9.c*/
#include <stdio.h>

int main()
{
    int i;
    long long factorial = 1; // 使用long long类型以存储较大的阶乘值
    long long sum = 0;

    for (i = 1; i <= 20; i++) {
        factorial *= i;   // 计算i的阶乘
        sum += factorial; // 将阶乘值加到sum中
    }

    printf("1! + 2! + 3! + ... + 20! 的和为: %lld\n", sum);
    return 0;
}