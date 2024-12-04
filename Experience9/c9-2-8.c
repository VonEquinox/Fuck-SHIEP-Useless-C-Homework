#include <stdio.h>
#include <string.h>
int main ()
{
    char s[50], l[50];
    printf ("输入两组单字符数组\n");
    fgets (s, sizeof (s), stdin);
    fgets (l, sizeof (s), stdin);
    char c[100] = {};
    int now = 0;
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) c[now++] = s[i];
    for (int i = 0; l[i] != '\0' && l[i] != '\n'; i++) c[now++] = l[i];
    printf ("两者并在一起后得到: %s\n", c);
    return 0;
}
