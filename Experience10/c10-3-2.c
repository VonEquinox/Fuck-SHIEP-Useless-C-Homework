#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100
#define IsInRangeEqual(Min, Value, Max) (Min <= Value && Value <= Max)

void input (int bigint[])
{
    char TempStr[N] = {0};
    scanf ("%s", TempStr);
    for (int i = 0; i < N; i++) if (!IsInRangeEqual ('0', TempStr[i], '9') && TempStr[i] != 0) exit (-1);
    for (int i = 0, Index = strlen (TempStr) - 1; i < N, Index >= 0; i++, Index--) bigint[i] = IsInRangeEqual ('0', TempStr[Index], '9') ? TempStr[Index] - '0' : 0;
}

void output (int bigint[], unsigned int size)
{
    int PrintFlag = 0;
    for (int i = size - 1; i >= 0; i--) {
        if (bigint[i] != 0) PrintFlag = 1;
        if (PrintFlag) printf ("%d", bigint[i]);
    }
    if (!PrintFlag) printf ("0");
}

void add (int bigint1[], int bigint2[], int bigint3[])
{
    for (int i = 0; i < N; i++) {
        bigint3[i] += bigint1[i] + bigint2[i];
        if (bigint3[i] > 9) {
            bigint3[i] -= 10;
            bigint3[i + 1] += 1;
        }
    }
}

int cmp_bigint (int bigint1[], int bigint2[])
{
    for (int i = N - 1; i >= 0; i--) {
        if (bigint1[i] > bigint2[i]) return 1;
        else if (bigint1[i] < bigint2[i]) return -1;
    }
    return 0;
}

void sub (int bigint1[], int bigint2[], int bigint3[])
{
    int Result = cmp_bigint (bigint1, bigint2);
    if (Result <= 0) return;
    int Index = 0;
    for (int i = N - 1; i >= 0; i--) if (bigint1[i] != 0) {
        Index = i;
        break;
    }
    for (int i = 0; i < N; i++) {
        bigint3[i] += bigint1[i] - bigint2[i];
        if (i == Index) return;
        if (bigint3[i] < 0) {
            bigint3[i] += 10;
            bigint3[i + 1] -= 1;
        }
    }
}

void multiply (int bigint1[], int bigint2[], int bigint3[])
{
    for (int j = 0; j < N; j++) for (int i = 0; i < N; i++) {
        bigint3[i + j] += bigint1[i] * bigint2[j];
        if (bigint3[i + j] > 9) {
            bigint3[i + j + 1] += bigint3[i + j] / 10;
            bigint3[i + j] %= 10;
        }
    }
}

int main ()
{
    printf ("输入数字1: ");
    int bigint1[N] = {0};
    input (bigint1);
    printf ("输入数字2: ");
    int bigint2[N] = {0};
    input (bigint2);
    getchar ();
    printf ("输入符号: ");
    char symbol = 0;
    scanf ("%c", &symbol);
    int bigint3[2 * N + 1] = {0};
    switch (symbol) {
        case '+':
            add (bigint1, bigint2, bigint3);
            output (bigint3, N);
            break;
        case '-':
            sub (bigint1, bigint2, bigint3);
            output (bigint3, N);
            break;
        case '*':
            multiply (bigint1, bigint2, bigint3);
            output (bigint3, 2 * N + 1);
            break;
    }
    return 0;
}
