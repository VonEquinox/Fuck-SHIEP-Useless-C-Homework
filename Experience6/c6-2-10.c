#include <cstdint>
#include <stdio.h>
int main()
{
    for (int i = 1; i < 1000000; i++) {
        if ((i % 2 == 1) && (i % 3 == 2) && (i % 5 == 4) && (i % 6 == 5) && (i % 7 == 0)) {
            printf("%d\n", i);
        }
    }
    return 0;
}