/*c7-1-2C.c*/
#include <stdio.h>
int main()
{
	int i = 0;
	int a[5] = { 10,20,30,40,50 };
	printf("输出数组a所有元素的值：\n");
	while (i <= 4)
	{
		printf("%5d", a[i]);
		i++;
	}
	printf("\n");
	return 0;
}