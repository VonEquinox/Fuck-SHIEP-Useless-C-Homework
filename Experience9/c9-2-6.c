/*c9-2-6.c*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int flag = 1, A = 0, a = 0, num = 0, space = 0, punctuation = 0, j = 0;
    while (flag == 1) {
        printf("输入一个长度小于等于80的字符串：\n");
        gets(s);
        if (strlen(s) >= 0 && strlen(s) <= 80)
            flag = 0;
        else
            printf("重新输入\n");
    }
    for (j = 0; s[j] != '\0'; j++) {
        if (s[j] == 32)
            space++;
        else if (s[j] >= 48 && s[j] <= 57)
            num++;
        else if (s[j] >= 65 && s[j] <= 90)
            A++;
        else if (s[j] >= 97 && s[j] <= 122)
            a++;
        else
            punctuation++;
    }

    printf("该字符串中有\n大写字母：%d\n小写字母：%d\n空格符：%d\n数字符：%d\n标点符号与运算符：%d\n", A, a, space, num,
           punctuation);
    return 0;
}