#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    srand(time(NULL));
    int a = (int)((double)rand()/RAND_MAX * 100);
    int b = (int)((double)rand()/RAND_MAX * 100);
    char c = (((double)rand()/RAND_MAX > 0.5) ? '+' : '-');
    printf("%d%c%d=",a,c,b);
    int temp;
    scanf("%d",&temp);
    if(temp != (c == '+' ? a + b : a-b))
        printf("错,答案是%d",(c == '+' ? a + b : a-b));
    else
        printf("对");
    return 0;
}