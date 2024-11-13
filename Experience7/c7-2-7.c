/*c7-2-7.c*/
#include <stdio.h>
int main()
{
    int a[20] = {6, 9, 12, 15, 19, 23, 45, 67, 89, 98};
    int b = 0;
    printf("输入数字:");
    scanf("%d", &b);
    printf("输入前数组:");
    for (int i = 0; i < 10; i++)
        printf("%d\t", a[i]);
    printf("\n");
    int c = 0;
    for (int i = 0; i < 10; i++) {
        if (b < a[i]) {
            c = i;
            break;
        }
    }
    for (int i = 10; i >= c; i--)
        a[i + 1] = a[i];
    a[c] = b;
    printf("输入后数组:");
    for (int i = 0; i < 11; i++)
        printf("%d\t", a[i]);
    printf("\n");
    return 0;
}
