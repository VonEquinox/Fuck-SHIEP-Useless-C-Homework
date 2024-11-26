/*  c9-1-1.c  */
#include <stdio.h>
int main()
{
    char ch[] = {'c', 'o', 'm', 'p', 'u', 't', 'e', 'r'};
    int i;
    for (i = 0; i < 8; i++)
        printf("%c", ch[i]);
    printf("\n");
    printf("数组 ch 的大小为：%d\n", sizeof(ch) / sizeof(char));
    return 0;
}
