#include <stdio.h>
int main ()
{
    int m, n, t;
    printf ("input the m and n: ");
    scanf ("%d %d", &m, &n);
    t = m;
    m = n;
    n = t;
    printf ("m = %d,n = %d", m, n);
    return 0;
}