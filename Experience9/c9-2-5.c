/*c9-2-5.c*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[80], ch;
    int b[80];
    int i, j = 0, flag = 0;
    printf("请输入字符串：");
    gets(s);
    printf("请输入字符：");
    scanf("%c", &ch);
    for (i = 0; s[i] != '\0'; i++) {
        if (ch == s[i]) {
            b[j] = (i + 1);
            flag = 1;
            j++;
        }
    }

    if (flag == 0)
        printf("字符串中没出现指定的字");
    else {
        printf("字符串中指定的字出现了%d次:", j);
        printf("\n位置为:");
        for (i = 0; i < j; i++)
            printf("%d ", b[i]);
    }

    return 0;
}