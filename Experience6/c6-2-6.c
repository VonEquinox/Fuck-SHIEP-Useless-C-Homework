/*c6-2-6.c*/
#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 100; i < 1000; i++)
        if (pow((i % 10), 3) + pow((i / 10 % 10), 3) + pow((i / 10 / 10 % 10), 3) == i)
            printf("%d ",i);
    return 0;
}