#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a <= 0 || b <=0 || c <=0){
        printf("error");
        return -1;
    }
    if((a + b > c) && (a+c>b)&&(b+c>a)){
        double S = sqrt(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c));
        printf("面积:%lf\n",S);
    }else{
        printf("不能组成三角");
        return -1;
    }
    if(a==b && b ==c && a==c)
        printf("等边");
    else if((a==b) || (b == c) || (a==c))
        printf("等腰");
    else if((a*a + b*b == c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a))
        printf("直角");
    else
        printf("一般");
    return 0;
}