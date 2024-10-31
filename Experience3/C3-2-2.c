#include<stdio.h>

int main()
{
    int a,b,t;
    printf("请输入变量a,b的值:");
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d",a,b);
    t = a;
    a = b;
    b = t;
    printf("a=%d,b=%d",a,b);
    return 0;
}