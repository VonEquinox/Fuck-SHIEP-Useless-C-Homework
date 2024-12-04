#include <stdio.h>
#include <string.h>
int main ()
{
    char str1[80] = "This Is a ", str2[80] = "c Program";
    printf ("string1 is: %s\n", str1);
    printf ("string2 is: %s\n", str2);
    /************found************/
    printf ("the length of str1 is: %d\n", strlen (str1));
    printf ("the length of str2 is: %d\n", strlen (str2));
    /************found************/
    if (strcmp (str1, str2) > 0)
        printf ("the max is: %s\n", str1);
    else
        printf ("the max is: %s\n", str2);
    /************found************/
    strcat (str1, str2);
    printf ("the result is: %s\n", str1);
    return 0;
}