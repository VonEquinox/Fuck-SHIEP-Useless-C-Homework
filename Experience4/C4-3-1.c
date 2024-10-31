#include<stdio.h>

int main()
{
    double Price = 0;
    int Count = 0;
    scanf("%lf%d",&Price,&Count);
    if(Price < 0 || Count < 0){
        printf("error\n");
        return -1;
    }
    Price = Price * Count;
    printf("总价%lf\n",Price);
    if(Count == 2){
        Price *= 0.85;
    printf("8.5折\n");
    } else if(Count >= 3){
        Price *= 0.7;
    printf("7折\n");
    }
    printf("减少%d\n",((int)Price / 300)*30);
    Price -= ((int)Price / 300)*30;
    printf("折扣后总价%lf\n",Price);
}