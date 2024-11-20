#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int arr[6] = {0};
    srand((unsigned int)time(NULL));
    for (i = 0; i < 6000; i++) {
        int j = 6.0*((double)rand() /RAND_MAX) + 1;
        arr[j - 1]++;
    }
    for (i = 0; i < 6; i++) {
        printf("数字%d出现次数：%d\n", i, arr[i]);
        printf("数字%d出现概率：%f\n", i, arr[i] / 6000);
    }
    return 0;
}
