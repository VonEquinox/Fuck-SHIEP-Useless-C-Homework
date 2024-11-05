/*c8-1-1.c*/
#include <stdio.h>
#define M 3
#define N 5
int main()
{
	char a[M][N] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O' };
	int i, j;
	printf("输出数组每个元素：");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			printf("%5c", a[i][j]);
		printf("\n");
	}
	printf("\n以十六进制输出每个元素的地址：\n");
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			printf("%10x", &a[i][j]);
		printf("\n");
	}
	printf("\n输出数组a占的储存空间大小：");
	printf("%5d", sizeof(a));
	printf("\n");
	return 0;
}
