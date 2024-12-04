/* c10-2-10.c */
#include <stdio.h>
#include <string.h>

void fun(char str1[], char str2[])
{
    unsigned int Length = strlen(str1);
    int Index = 0;
    for (unsigned int i = 0; i < Length; i += 2) {
        str2[Index] = str1[i];
        Index++;
    }
}

int main()
{
    char str1[] = "This is a C Program";
    char str2[100] = {0};
    fun(str1, str2);
    printf("%s\n", str2);
    return 0;
}