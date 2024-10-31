#include<stdio.h>

int main(){
    float r;
    double area;
    printf("请输入圆的半径:");
    scanf("%f",&r);
    area = 3.14159 * r * r;
    printf("计算结果如下:\n");
    printf("r=%5.2f, area=%lf\n", r, area);
    return 0;
}