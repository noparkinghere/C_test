/*
 *
 * input n, get all can be divided by n
 *
 */

#include <stdio.h>

int main()
{
	int input_n, i;
	printf("input the n!\n");
	scanf(" %d", &input_n);
	
	for (i = 1; i <= input_n; i++)
		if (input_n % i == 0)
			printf("%d\t", i);

	printf("\n");
}
