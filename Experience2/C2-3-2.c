#include<stdio.h>
int main()
{
    printf("春眠不觉晓\n");
    printf("处处闻啼鸟\n");
    printf("夜来风雨声\n");
    printf("花落知多少\n");
    FILE *fp;
    fp=fopen("春晓.txt","w");
    fprintf(fp,"花落知多少\n");
    fprintf(fp,"处处闻啼鸟\n");
    fprintf(fp,"夜来风雨声\n");
    fprintf(fp,"花落知多少\n");
    fclose(fp);
    return 0;
}