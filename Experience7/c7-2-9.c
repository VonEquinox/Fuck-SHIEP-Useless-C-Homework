/*c7-2-9.c*/
#include <stdio.h>
int main()
{
    int a[10] = {6, 9, 12, 9, 8, 20, 9, 6, 15, 5};
    int b = 0;
    printf("输入数字:");
    scanf("%d", &b);
    int index = 0;
    int count = 0;
    for (int i = 0; i < 10; i++) {
        if (b == a[i]) {
            for (int j = i + 1; j < 10-count; j++)
                a[j - 1] = a[j];

            count++;
        }
    }
    for (int i = 0; i < 10 - count; i++)
        printf("%d ", a[i]);
    return 0;
}