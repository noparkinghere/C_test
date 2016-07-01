/*
 *
 * printf yanghui triangle
 *
 */

#include <stdio.h>

int main()
{
	int a[100] = {1,1};
	int b[100];
	int i, j, input;
//	int c = 1;
	printf("input the row num\n");
	scanf(" %d", &input);
	printf("1\n");// printf the first line
	for(i = 1; i < input; i++) // printf every line
	{
		printf("1\t");
		for(j = 1; j < i; j++) 
		{
			b[j] = a[j - 1] + a[j];
			printf("%d\t", b[j]);
		}
		for(j = 1; j < i; j++) //make present line data to be last line data
			a[j] = b[j];

		a[j] = 1;
		printf("1\n");
	}
}
