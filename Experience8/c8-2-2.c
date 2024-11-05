/*c8-2-2.c*/
#include <stdio.h>
int main()
{
	int i, j, k, a[5][5];
	k = 2;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
    /***********found***********/
			if (j <= i)
				a[i][j] = 1;
			else
				a[i][j] = k++;
	printf("array a:\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%4d", a[i][j]);
    /***********found***********/
		printf("\n");
	}
	return 0;
}