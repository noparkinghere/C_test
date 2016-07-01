/*
 *
 * array to pointer
 *
 */

#include <stdio.h>

void pointer(int a[]);
int main()
{
	int a[10];
	int i;
	for(i = 0; i < 10; i++)
		scanf(" %d", &a[i]);
	pointer(a);
}

void pointer(int a[])
{
	int *p;
	for(p = a; p < a + 10; p++)
		printf("%d\t", *p);
	printf("\n");
}
