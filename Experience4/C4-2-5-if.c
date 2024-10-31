#include<stdio.h>

int main()
{
    float score = 0;
    scanf("%f",&score);
    if(score > 100 || score < 0){
        printf("error");
        return -1;
    }
    if(90 <= score && score <= 100)
        printf("A");
    else if(80 <= score)
        printf("B");
    else if(70 <= score)
        printf("C");
    else if(60 <= score)
        printf("D");
    else
        printf("E");
    return 0;
}