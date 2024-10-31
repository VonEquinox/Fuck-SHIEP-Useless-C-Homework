#include<stdio.h>

int main(){
    float fa, fb, fsum;
    double d;
    fa = 3141.592678;
    fb = 6.026e-27;
    fsum = fa + fb;
    d = 31415926.78;
    printf("float类型数据的打印结果:\n");
    printf("fa=%f\t fb=%f\t fsum=%7.2f\n", fa, fb, fsum); //用格式符%f输出
    printf("fa=%e\t fb=%e\t fsum=%e\n", fa, fb, fsum); //用格式符%e输出
    printf("double类型数据的打印结果:\n");
    printf("d=%lf, d=%e\n", d, d); //注意：%lf用于double类型，%e用于科学计数法
    return 0;
}