#include<stdio.h>

int main()
{
    float score = 0;
    scanf("%f",&score);
    if(score > 100 || score < 0){
        printf("error");
        return -1;
    }
    int temp = score / 10;
    switch(temp)
    {
        case 10:
        case 9:
        printf("A");
        break;
        case 8:
        printf("B");
        break;
        case 7:
        printf("C");
        break;
        case 6:
        printf("D");
        break;
        default:
        printf("E");
    }
    return 0;
}