#include<stdio.h>

int main()
{
    double w,h;
    scanf("%lf%lf",&w,&h);
    if(w < 0 || h < 0){
        printf("error");
        return -1;
    }
    double t = w/h/h;
    if(t < 18)
        printf("低体重");
    else if(t < 25)
        printf("正常体重");
    else if(t < 27)
        printf("超重体重");
    else
        printf("肥胖");
    return 0;
}