#include<stdio.h>
int main(){
    float x, y;
    printf("请输入x的值:");
    scanf("%f", &x);
    /**************found****************/
    if(x >= 0)
        y = x + 1;
    /**************found****************/
    else
        y = x - 1;
    printf("y=%.3f\n", y);
    return 0;
}