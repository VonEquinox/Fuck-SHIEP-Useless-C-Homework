#include <stdio.h>
#include <string.h>
int main ()
{
    char s[80];
    int A = 0, a = 0, num = 0, space = 0, other = 0;
    printf ("输入一个长度小于等于80的字符串:\n");
    fgets (s, sizeof (s), stdin);
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
    {
        if (s[i] == ' ') space++;
        else if (s[i] >= '0' && s[i] <= '9') num++;
        else if (s[i] >= 'A' && s[i] <= 'Z') A++;
        else if (s[i] >= 'a' && s[i] <= 'z') a++;
        else other++;
    }
    printf ("该字符串中有大写字母: %d个, 小写字母: %d个, 空格: %d个, 数字: %d个, 其他字符: %d个\n", A, a, space, num, other);
    return 0;
}