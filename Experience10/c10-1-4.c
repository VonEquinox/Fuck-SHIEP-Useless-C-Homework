/*c10-1-4.c*/
#include <stdio.h>
void swap(int* m,int* n)
{
	int t;
	t = m;
	m = n;
	n = t;
	printf("function swap:\n");
	printf("m = %d,n = %d\n", m, n);
}
int main()
{
	int m, n;
	printf("input m and n:");
	scanf("%d %d", &m, &n);
	swap(&m, &n);
	printf("function main:\n");
	printf("m = %d,n = %d\n", m, n);
	return 0;
}