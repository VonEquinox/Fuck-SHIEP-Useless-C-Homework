#include<stdio.h>

int main() {
    int x, y;
    printf("请输入 x:");
    scanf("%d", &x);
    /**************found****************/
    if (x < 1)
        y = x;
    /**************found****************/
    else if (1 <= x && x < 10)
        y = 2 * x - 1;
    else
        y = 3 * x - 11;
    printf("y=%d\n", y);
    return 0;
}