/*c5-3-2.c*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
 {
 	FILE*fp;
    int Count = 0;
    double TotalAmount = 0;
    fp=fopen("red_packet.txt", "w");
    printf("请输入红包总金额: ");
    scanf("%lf", &TotalAmount);
    fprintf(fp,"红包总金额为%lf元\n",TotalAmount);
    printf("请输入红包个数: ");
    scanf("%d", &Count);
    fprintf(fp,"红包的个数为%d个\n",Count);
    unsigned int seed = (unsigned int)time(NULL);
    srand(seed);
    long long sum = 0;
    for (int i = 0; i < Count; i++)
        sum += rand();
    srand(seed);
    for (int i = 0; i < Count; i++) {
        double tempd = (double)rand();
        printf("%lf\n",TotalAmount * tempd / sum);
        fprintf(fp,"%lf\n",TotalAmount *  tempd / sum);
    }
    fclose(fp);
    return 0;
}
