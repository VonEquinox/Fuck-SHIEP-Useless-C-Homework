/*c12-1-1.c*/
#include <stdio.h>
int main()
{
    int a, *p;
    p = &a;
    *p = 10;
    printf("%d %d\n", p, *p);
    return 0;
}