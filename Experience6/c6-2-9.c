#include <cmath>
#include <stdio.h>
#include <math.h>

int main()
{
    double epsilon = 1e-6;
    double low = 0;
    double high = 3;
    double mid = -1;
    while (fabs((pow(mid, 3) - pow(mid, 2) - 1)) > epsilon){
        if (((pow(low, 3) - pow(low, 2) - 1) < 0) ^ ((pow(high, 3) - pow(high, 2) - 1) < 0))
            mid = (low + high) / 2;
        if (((pow(low, 3) - pow(low, 2) - 1) < 0) ^ ((pow(mid, 3) - pow(mid, 2) - 1) < 0))
            high = mid;
        else if (((pow(mid, 3) - pow(mid, 2) - 1) < 0) ^ ((pow(high, 3) - pow(high, 2) - 1) < 0))
            low = mid;
    }
    printf("%lf",mid);
    return 0;
}
