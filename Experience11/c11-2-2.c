#define N 5
/*c11-2-2.c*/
#include <stdio.h>
struct man {
    char name[20];
    int age;
};
int main()
{
    struct man person[] = {{"Li", 20}, {"Yang", 21}, {"Sun", 18}, {"Zhao", 23}, {"Lin", 17}};
    int i, kmin;
    kmin = 0;
    for (i = 1; i < N; i++) {
        if (person[i].age < person[kmin].age)
            kmin = i;
    }
    printf("年龄最小的:%s,年龄为%d\n", person[kmin].name, person[kmin].age);
    return 0;
}