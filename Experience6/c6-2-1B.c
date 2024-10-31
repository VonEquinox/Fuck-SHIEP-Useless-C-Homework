/*c6-2-1.c*/
#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 0; i <= 6; i=i+2)
	{
		for (j = 0; j <= 5+ i; j++) 
			printf(" ");
		for (k = 0; k <= 5; k++) 
			printf("*");
			printf("\n");
	}
	return 0;
}