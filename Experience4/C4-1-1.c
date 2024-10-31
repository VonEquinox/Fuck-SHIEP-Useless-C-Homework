#include<stdio.h>

int main()
{
    int a, b, t;
    printf("请输入a和b的值:");
    scanf("%d%d", &a, &b);
    if(a < b) {
        t = a;
        a = b;
        b = t;
    }
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
