#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int i = 0;
    printf("Please input string:\n");
    gets(s);
    for (i = 0; i < strlen(s); i++)  // 1
        if (s[i] >= 'A' && s[i] <= 'Z')  // 2
            s[i] = s[i] + 'a' - 'A';
    puts(s);
    return 0;
}