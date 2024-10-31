#include<stdio.h>

int main()
{
    int x,y;
    printf("input x and y:\n");
    scanf("x=%d,y=%d",&x,&y);
    int sum = x + y;
    printf("x+y=%d",sum);
    return 0;
}