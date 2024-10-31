#include <stdio.h>
int main()
{
    int n = 0;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    printf("%d的所有质因子为：", n);
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
    return 0;
}