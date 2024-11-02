/*c5-3-2.c the best version i think*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int Count = 0;
    double TotalAmount = 0;
    printf("请输入红包总金额: ");
    scanf("%lf", &TotalAmount);
    printf("请输入红包个数: ");
    scanf("%d", &Count);
    unsigned int seed = (unsigned int)time(NULL);
    srand(seed);
    long long sum = 0;
    for (int i = 0; i < Count; i++)
        sum += rand();
    srand(seed);
    for (int i = 0; i < Count; i++)
        printf("%lf\n",TotalAmount * (double)rand() / sum);
    return 0;
}
