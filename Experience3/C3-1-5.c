#include<stdio.h>

int main(){
    int a, b, c, d;
    a = 2147483647;
    b = a + 1;
    c = -2147483648;
    d = c - 1;
    printf("正数范围 a=%d, b=%d\n", a, b);
    printf("负数范围 c=%d, d=%d\n", c, d);
    return 0;
}