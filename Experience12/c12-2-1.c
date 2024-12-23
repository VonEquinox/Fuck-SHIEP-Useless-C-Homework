/*c12-2-1.c*/
#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int i = 0;
    printf("input string:");
    gets(s);
    for (i = 0; i < strlen(s); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 'a' - 'A';
    puts(s);
    return 0;
}