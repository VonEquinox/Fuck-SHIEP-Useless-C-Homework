#include <stdio.h>
#define N 5
struct man {
    char name[20];
    int age;
};  //_
int main()
{
    struct man person[] = {{"Li", 20}, {"Yang", 21}, {"Sun", 18}, {"Zhao", 23}, {"Lin", 17}};  //_
    int kmin = 0;
    for (int i = 1; i < N; i++) {
        if (person[i].age < person[kmin].age) kmin = i;
    }
    printf("年龄最小的: %s, 年龄为%d\n", person[kmin].name, person[kmin].age);  //_
    return 0;
}