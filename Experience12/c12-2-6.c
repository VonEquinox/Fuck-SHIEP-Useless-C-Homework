#include <stdio.h>
#define N 10
int main()
{
    int a[N] = {70, 50, 70, 90, 80, 65, 70, 50, 90, 65};
    int *p, x, count = 0;
    printf("输入待查找的数: ");
    scanf("%d", &x);
    for (p = a; p < a + N; p++)  //_
        if (x == *p)  //_
            count++;
    printf("共有%d个%d\n", count, x);
    return 0;
}