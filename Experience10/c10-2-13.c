#include <stdio.h>

int func (int n, int x)
{
    if (n == 0) return 1;
    else if (n == 1) return x;
    else return ((2 * n - 1) * x * func (n - 1, x) - (n - 1) * func (n - 2, x)) / n;
}

int main ()
{
    printf ("%d", func (5, 5));
    return 0;
}