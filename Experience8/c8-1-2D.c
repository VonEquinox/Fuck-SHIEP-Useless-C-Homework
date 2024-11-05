/*c8-1-2.c*/
#include <stdio.h>
int main()
{
	int a[3][3] = { 10,20,30,40,50,60};
    printf("输出数组a所有元素的值：\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            printf("%d\n",a[i][j]);
	printf("\n");
	return 0;
}