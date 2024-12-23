/*c12-1-2.c*/
#include <stdio.h>
#include <string.h>
int main()
{
    char *s1;
    char s2[20];
    s1 = "abcde";
    puts(s1);
    strcpy(s2, "ABCDE");
    puts(s2);
    return 0;
}