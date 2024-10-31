#include<stdio.h>
int main(){
    float d1, d2;
    char op;
    printf("输入d1 op d2:");
    scanf("%f%c%f", &d1, &op, &d2);
    /**************found****************/
    switch(op){
        float temp;
    /**************found****************/
        case '+':
            temp = d1 + d2;
            printf("%.2f + %.2f = %.2f\n", d1, d2, temp);
            break;
        case '-':
            temp = d1 - d2;
            printf("%.2f - %.2f = %.2f\n", d1, d2, temp);
            break;
        case '*':
    /**************found****************/
            temp = d1 * d2;
            printf("%.2f * %.2f = %.2f\n", d1, d2, temp);
            break;
        case '/':
                temp = d1 / d2;
                printf("%.2f / %.2f = %.2f\n", d1, d2, temp);
            break;
    /**************found****************/
        default:
            printf("无效的运算符\n");
    }
    return 0;
}