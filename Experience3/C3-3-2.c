#include<stdio.h>

int main()
{
    int a,b,c,d;
    FILE* p1 = fopen("score.txt","r");
    fscanf(p1,"%d%d%d%d",&a,&b,&c,&d);
    fclose(p1);
    FILE* p = fopen("score_avg.txt","w");
    fprintf(p,"学号\t高数\t英语\tC语言\t平均分\n");
    fprintf(p,"%d\t%d\t\t%d\t\t%d\t\t%.2f\n",a,b,c,d,((float)b+c+d)/3);
    fclose(p);
    return 0;
}