#include<stdio.h>

int main(){
    int a;
    float d;
    char c1;
    double f;
    long m;
    unsigned p;
    // a = 61;
    // c1 = 'a';
    // d = 3.56;
    // f = 3157.890121;
    // m = -2147483647;
    // p = -2147483647;
    scanf("%d,%c,%f,%f,%d,%u",&a,&c1,&d,&f,&m,&p);
    // printf("a=%d\n c1=%c\n d=%6.2f\n", a, c1, d);
    // printf("f=%15.12f\n m=%ld\n p=%u\n", f, m, p);
    printf("a=%d\nc1=%c\nd=%15.6f\n",a,c1,d);
    printf("f=%f\nm=%d\np=%d\n", f, m, p);
    return 0;
}