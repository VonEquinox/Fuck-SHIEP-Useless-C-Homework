#include <stdio.h>
#define N 2

void transporsition (int x[N][N])
{
    int m, n, swap;
    for (m = 1; m < N; m++)
        for (n = 0; n < m; n++) {
            swap = x[m][n];
            x[m][n] = x[n][m];
            x[n][m] = swap;
        }
}

int main ()
{
    int a[N][N] = {{1, 2}, {3, 4}};
    int i = 0;
    int j = 0;
    printf ("转置前:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) printf ("%d\t", a[i][j]);
        printf ("\n\n");
    }
    transporsition (a);
    printf ("转置后:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) printf ("%d\t", a[i][j]);
        printf ("\n\n");
    }
    return 0;
}