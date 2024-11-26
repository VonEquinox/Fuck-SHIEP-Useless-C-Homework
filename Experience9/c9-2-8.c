/* c9-2-8.c */
#include <stdio.h>
#include <string.h>
int main()
{
    char s[50], l[50];
    printf("输入两组单字符数组\n");
    gets(s);
    gets(l);
    char c[100] = {"0"};
    int j, i, k;
    i = strlen(l);
    j = strlen(s);
    i = j + i;
    for (k = 0; k < j; k++)
        c[k] = s[k];
    for (k = j; k < i; k++)
        c[k] = l[k - j];
    printf("两者并在一起后得到%s", c);
    return 0;
}