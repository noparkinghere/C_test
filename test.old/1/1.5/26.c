/*
 *
 * reverse the array
 *
 */

#include <stdio.h>

int main()
{
	int a[5], tmp, i;
	for(i = 0; i < 5; i++)
		scanf(" %d", &a[i]);

	for(i = 0; i < 5 / 2; i++)
	{
		tmp = a[i];
		a[i] = a[4 - i];
		a[4 - i] = tmp;
	}
	
	for(i = 0; i < 5; i++)
		printf("%d\t", a[i]);

	printf("\n");
	
}
