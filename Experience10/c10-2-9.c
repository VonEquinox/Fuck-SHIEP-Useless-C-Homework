/* c10-2-9.c */
#include <stdio.h>

int convert(int m, int binary[])
{
    unsigned int Length = 0;
    unsigned int Temp = m;
    for (unsigned int i = 0; i < sizeof(int) * 8; i++) {
        if (Temp == 0)
            return i;
        binary[i] = Temp & 1;
        Temp >>= 1;
    }
    return 0;
}

int main()
{
    int arr[32] = {0};
    int num = 0;
    scanf("%d", &num);
    int Length = convert(num, arr);
    for (int i = 0; i < Length; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}