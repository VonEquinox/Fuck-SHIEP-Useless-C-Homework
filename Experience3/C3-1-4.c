#include<stdio.h>

int main(){
    char c1 = 'a', c2 = 'b', c3 = 'c';
    c1 = c1 + 2;
    c2 = c2 + 8;
    c3 = c3 - 32;
    printf("char类型数据的打印结果:\n");
    printf("c1=%c\t c2=%c\t c3=%c\n", c1, c2, c3);
    printf("char类型数据和int类型的关系:\n");
    printf("c1=%d\t c2=%d\t c3=%d", c1, c2, c3);
    return 0;
}