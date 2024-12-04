#include <stdio.h>
#include <string.h>
int main ()
{
    char s[80];
    printf ("请输入字符串: ");
    fgets (s, sizeof (s), stdin);
    char ch;
    printf ("请输入字符: ");
    scanf ("%c", &ch);
    int b[80];
    int j = 0, flag = 0;
    for (int i = 0; s[i] != '\0'; i++) if (ch == s[i])
    {
        b[j] = i + 1;
        flag = 1;
        j++;
    }
    if (!flag) printf ("字符串中没有该字符\n");
    else
    {
        printf ("字符串中该字符出现了%d次\n", j);
        printf ("位置为: ");
        for (int i = 0; i < j; i++) printf ("%d ", b[i]);
    }
    printf ("\n");
    return 0;
}