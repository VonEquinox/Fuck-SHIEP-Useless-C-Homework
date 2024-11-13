#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[200] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int B[200] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int result[201] = {0};
    for (int i = 0; i < 200; i++) {
        int ta = A[i];
        int tb = B[i];
        result[i] += ta +tb;
        if (result[i] > 10) {
            result[i] -= 10;
            result[i+1] += 1;
        }
    }
    for (int i = 200; i >=0; i--)
        printf("%d",result[i]);
    printf("\n");
    return 0;
}
