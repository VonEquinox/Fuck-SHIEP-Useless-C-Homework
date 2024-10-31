#include<stdio.h>

int main()
{
    char ch;
    printf("Input ch:");
    ch = getchar();
    ch += 32;
    putchar(ch);
    printf("%c",ch);
    return 0;
}
