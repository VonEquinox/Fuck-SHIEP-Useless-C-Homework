#include<stdio.h>

int main()
{
    char a,b;
    a = getchar();
    b = getchar();
    putchar(a);
    putchar(b);
    printf("%c%c",a,b);
    return 0;
}