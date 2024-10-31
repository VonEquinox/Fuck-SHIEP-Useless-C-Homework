/*c5-2-5.c*/
#include <stdio.h>
int main()
{
    int s, t, s1 = 10;
    printf("\nPlease enter s:");
    scanf("%d", &s);
    /************found***********/
    t = s % 10;
    while (s > 0) {
        s = s / 100;
        t = s % 10 * s1 + t;
        /************found***********/
        s1 = s1 * 10;
    }
    printf("the reasult is: %d\n", t);
    return 0;
}