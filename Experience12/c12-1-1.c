#include <stdio.h>
int main()
{
    int a, *p;
    p = &a;
    *p = 10;
    printf("%d %d\n", p, *p);
    return 0;
}