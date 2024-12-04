#include <stdio.h>
#include <string.h>
int main ()
{
    char s[80], t[80];
    int i, len;
    printf ("\nPlease enter string s: ");
    /************found************/
    scanf ("%s", s);
    len = strlen (s);
    /************found************/
    for (i = 0; i < len; i++)
        t[i] = s[i];
    for (i = 0; i < len; i++)
        /************found************/
        t[len + i] = s[len - i - 1];
    /************found************/
    t[2 * len] = 0;
    printf ("The result is: %s\n", t);
    return 0;
}