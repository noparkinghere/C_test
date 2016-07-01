/*
 *
 * output the result of 1/1+1/2+...1/n
 *
 */

#include <stdio.h>

int main()
{
	int input_n, i = 1;
	float result = 0;
	printf("input the n\n");
	scanf(" %d", &input_n);

	while(i <= input_n)
	{
		result += 1.0 / i;
		i++;
	}
	printf("%.3f\n", result);
}
