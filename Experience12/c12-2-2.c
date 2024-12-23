/*c12-2-2.c*/
#include <stdio.h>
int main()
{
    char s[20];
    char *p;
    printf("input string:");
    scanf("%s", s);
    p = s;
    while (*p != '\0') {
        if (*p >= 'A' && *p <= 'Z')
            *p = *p + 'a' - 'A';
        p++;
    }
    p = s;
    while (*p != '\0') {
        putchar(*p);
        p++;
    }
    printf("\n");
    return 0;
}