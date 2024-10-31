#include <cmath>
#include <cstdlib>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int count = 0;
    for (int i = 0; i < 1000000; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (sqrt(pow(x, 2) + pow(y, 2)) <= 1)
            count++;
    }
    printf("%lf",(double)count/1000000*4);
    return 0;
}