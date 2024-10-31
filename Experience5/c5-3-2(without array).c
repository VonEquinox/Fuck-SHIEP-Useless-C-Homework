#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	float total, min = 0.01, safe_total, money;
	int num, i;
	FILE* fp=fopen("red_packet.txt","w");
	if (fp == NULL)
	{
		printf("error");
		return 1;
	}
	printf("输入总金额：");
	scanf("%f", &total);
	printf("输入红包个数：");
	scanf("%d", &num);
	fprintf(fp, "总金额：%.2f 红包个数：%d\n", total, num);
	srand(time(NULL));
	for (i = 1; i < num; i++)
	{
		safe_total = (total - (num - i) * min)/(rand() % (num - 1) + 1);
		//计算可分配的最大红包的价格safe_total,(total - (num - i) * min)保证后面每个红包都至少分得0.01；(rand() % (num - 1) + 1)使每个红包数额更平均更符合真实情况，防止后面几个包全是0.01
		money = (float)(rand() % ((int)(safe_total * 100))) / 100 + min;
//分配第i个红包，金额money=0-safe_total
		total -= money;
		printf("第%2d个红包：%8.2f元 余额：%.2f元\n", i, money, total);
		fprintf(fp, "第%2d个红包：%8.2f元 余额：%.2f元\n", i, money, total);
	}
	printf("第%2d个红包：%8.2f元 余额：0.00元\n", num, total);
	fprintf(fp, "第%2d个红包：%8.2f元 余额：0.00元\n", num, total);
	fclose(fp);
	fp = NULL;
	return 0;
}