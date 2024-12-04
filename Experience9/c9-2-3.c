#include <stdio.h>
#include <string.h>
int main ()
{
    char str[80] = "This Is a c Program";
    int i;
    printf ("string is: %s\n", str);
    /************found************/
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            /************found************/
            str[i] = str[i] + 32;
    /************found************/
    printf ("result is: %s\n", str);
    return 0;
}