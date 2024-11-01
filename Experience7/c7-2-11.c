#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, i = 0, j = 0;
    float h = 0.0;
    int arr[6] = {0};
    srand((unsigned int)time(NULL));
    for (i = 0; i < 6000; i++) {
        j = 6*(double)rand() /RAND_MAX;
        arr[j]++;
    }
    for (i = 0; i < 6; i++) {
        h = arr[i];
        h = h / 6000;
        printf("数字%d出现次数：%d\n", i, arr[i]);
        printf("数字%d出现概率：%f\n", i, h);
    }
    return 0;
}