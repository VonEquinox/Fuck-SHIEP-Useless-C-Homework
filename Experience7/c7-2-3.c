/*c7-2-3.c*/
#include <stdio.h>
#define N 10
int main()
{
	int a[N] = { 10,20,30,40,50,60,70,80,90,100 };
	int low, high, mid, x;
	printf("输入待查找元素：");
	scanf("%d", &x);
	low = 0;
    /************found***********/
	high = 9;
    /************found***********/
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x == a[mid])
		{
			printf("元素%d的下标为%d\n", x, mid);
			return 1;
		}
		else if (a[mid] > x)
		{
			high = mid - 1;
		}
    /************found***********/
		else if (a[mid] < x)
			low = mid + 1;
	}
	printf("没找到");
	return 0;
}