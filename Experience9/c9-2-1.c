/*c9-2-1.c*/
#include <stdio.h>
int main()
{
    char s[10];
    int i;
    int n = 0;
    printf("请输入数字字符串：");
    gets(s);
    /*************found*************/
    for(i=0;s[i]!=0;i++)
    {
    /*************found*************/
		if(s[i]>'9'||s[i]<'0')
        {
            printf("你输入了非法字符\n");
            return 1;
        }
        else
    /*************found*************/
            n = 10 * n + (s[i] - '0');
    }
    printf("n=%ld\n", n);
    return 0;
}
