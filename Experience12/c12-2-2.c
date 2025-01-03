#include <stdio.h>
int main()
{
    char s[20];
    char *p;
    printf("Please input string:\n");
    scanf("%s", s);
    p = s;
    while (*p != '\0') {
        if (*p >= 'A' && *p <= 'Z')
            *p = *p + 'a' - 'A';  // 1
        p++;
    }
    p = s;  // 2
    while (*p != '\0') {
        putchar(*p);  // 3
        p++;  // 4
    }
    printf("\n");
    return 0;
}