/*
 *
 * pointer swape
 *
 */
#include <stdio.h>

void swap(int *i, int *j);
int main()
{
	int i, j;
	printf("input the number:\n");
	scanf(" %d,%d", &i, &j);
	printf("%d\t%d\n", i, j);
	swap(&i, &j);
	printf("%d\t%d\n", i, j);
}

void swap(int *i, int *j)
{
	int tmp;
	tmp = *i;
	*i = *j;
	*j = tmp;
}
