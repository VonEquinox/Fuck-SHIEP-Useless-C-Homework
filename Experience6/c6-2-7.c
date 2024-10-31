/*c6-2-7.c*/
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int dig = 0;
    int tt = t;
    while (tt != 0) {
        dig++;
        tt /= 10;
    }
    printf("%d位数字\n%d", dig, t);
    printf("\n");
    for (int i = 0; i < dig; i++) {
        printf("%d", t % 10);
        t /= 10;
    }
    printf("\n");
    return 0;
}
