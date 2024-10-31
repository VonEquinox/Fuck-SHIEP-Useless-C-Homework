/*5-2-8.c*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    char ch;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    ch = getchar();
    while (ch != '\n') {
        if (ch == ' ')
            a++;
        else if (ch >= '0' && ch <= '9')
            b++;
        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
            c++;
        else
            d++;
        ch = getchar();
    }
    printf("空格:%d\n数字:%d\n字母:%d\n其他:%d\n", a, b, c, d);

    return 0;
}