#include<stdio.h>

int main()
{
    int a,b,t;
    a = 2;
    b = 1;
    t = a;
    a = b;
    b = t;
    printf("a=%d,b=%d",a,b);
    return 0;
}