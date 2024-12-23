/*c12-2-8.c*/
#include <stdio.h>
int main()
{
    char *p = "hguk468denbgf456685AOW4HUB6FKWYUV4864bfWYUIt";
    int cap = 0, low = 0, num = 0, oth = 0;
    while (*p != '\0') {
        if (*p >= 'A' && *p <= 'Z')
            cap++;
        else if (*p >= 'a' && *p <= 'z')
            low++;
        else if (*p >= '0' && *p <= '9')
            num++;
        else
            oth++;
        p++;
    }
    printf("大写字母有%d个，小写字母有%d个，数字有%d个，其他字符有%d个\n", cap, low, num, oth);
    return 0;
}