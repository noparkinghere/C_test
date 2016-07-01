/*
 *
 * output the n!
 *
 * warning : int is too small , need use float
 *
 *
 */

#include <stdio.h>

int main()
{
	int i, input_n;
       	float result = 1;
	printf("input the n!\n");
	scanf(" %d", &input_n);
	
	for(i = 1; i <= input_n; i++)
		result *= i;
	printf("result = %.0f\n", result);
}
