/*
 *
 * 
 *
 */

#include <stdio.h>
#define NUM 3

int main()
{
	int i, a = 2, b = 1, tmp;
	float result = 0;
	for(i = 0; i < NUM; i++)
	{
		result += (float)a / b;
		tmp = b;
		b = a;
		a += tmp; 
	}
	printf("%f\n", result);
}
