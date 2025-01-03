#include <stdio.h>
int cmpstr(char *s1, char *s2)
{
    char *p1, *p2;
    p1 = s1;
    p2 = s2;
    while (*p1 != 0 && *p2 != 0) {  //_
        if (*p1 == *p2) {
            p1++;
            p2++;
        }
        else
            break;
    }
    return (*p1 - *p2);  //_
}
int main()
{
    char s1[80], s2[80];
    int c = 0;
    printf("input string s1: ");
    gets(s1);
    printf("string s1 is: %s\n", s1);
    printf("input string s2: ");
    gets(s2);
    printf("string s2 is: %s\n", s2);
    c = cmpstr(s1, s2);
    if (c > 0)
        printf("s1 > s2\n");
    else if (c < 0)
        printf("s1 < s2\n");
    else
        printf("s1 == s2\n");
    return 0;
}