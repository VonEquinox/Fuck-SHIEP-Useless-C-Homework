/*c7-2-5.c*/
#include <stdio.h>
int main()
{
	int a[10] = { 1,5,2,5,6,8,7,4,3,0 };
	int i, k, x, f = 0;
	for (int b = 0; b <= 2; b++)
	{
		printf("please input x:");
		scanf("%d", &x);

		for (i = 0; i < 10; i++)
			if (a[i] == x)
			{
				f = 1;
    /************found***********/
				k = i;
			}

    /************found***********/
		if (f == 1)
			printf("last %d is NO.%d\n", x, k);
		else
			printf("%d not found!\n", x);
	}
	return 0;
}