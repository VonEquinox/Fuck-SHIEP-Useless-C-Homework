/*c7-2-10.c*/
#include <stdio.h>
#include <math.h>

int main()
{
    int k = 0;
    int arr[100] = { 0 };
    for (int i = 2; i < 100; i++) {
        int Count = 0;
        for (int j = 1; j <= i; j++)
            if (i % j == 0)
                Count++;
        if (Count == 2) {
            arr[k] = i;
            k++;
        }
    }
    for (int i = 0; i < k; i++)
        printf("%d ",arr[i]);
    return 0;
}