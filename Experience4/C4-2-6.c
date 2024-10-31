#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    if(t < 0 || t > 99999){
        printf("error\n");
        return -1;
    }
    int dig = t >= 10000 ? 5 : t >= 1000 ? 4 : t >= 100 ? 3 : t >= 10 ? 2 : 1;
    printf("%d位数字\n%d",dig,t);
    printf("\n");
    for(int i = 0;i < dig;i++){
        printf("%d",t % 10);
        t /= 10;
    }
    return 0;
}
