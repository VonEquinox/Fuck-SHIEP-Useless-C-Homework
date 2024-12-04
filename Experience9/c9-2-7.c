#include <stdio.h>
#include <string.h>
#define N 80
int main ()
{
    char input[N];
    printf ("请输入字符串:\n");
    fgets (input, sizeof (input), stdin);
    char reverse[N];
    for (int i = 0; i < strlen (input); i++) reverse[i] = input[strlen (input) - i - 1];
    printf ("该字符串逆序为:");
    puts (reverse);
    return 0;
}
