/* c9-2-7.c */
#include <stdio.h>
#include <string.h>
#define N (80)
int main()
{
    char ch[N], t;
    unsigned int i, n;

    printf("请输入字符串:\n");
    gets(ch);
    n = strlen(ch);
    for (i = 0; i <= (n - 1) / 2; i++) {
        t = ch[i];
        ch[i] = ch[n - 1 - i];
        ch[n - 1 - i] = t;
    }
    printf("该字符串逆序为:\n");
    puts(ch);
    return 0;
}
