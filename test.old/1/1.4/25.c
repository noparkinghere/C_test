/*
 *
 * a num ,get the sum of evry bit's square
 *
 */
 
#include <stdio.h>

int main()
{
	long input_n, result;
	int a[10];
	int i = 0;

	printf("input a number!\n");
	scanf(" %d", &input_n);

	do
	{
		a[i] = input_n % 10;
		result += a[i] * a[i];
		i++;
	}while(input_n /= 10);
	printf("result = %ld\n", result);
}
