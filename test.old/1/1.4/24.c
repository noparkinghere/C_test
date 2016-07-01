/*
 *
 * give a number , ab;
 * find a cd can match: ab + cd = ba + dc
 *
 */

#include <stdio.h>

int main()
{
	int i, input_n;
	printf("input a double-digit\n");
	scanf(" %d", &input_n);
	
	for(i = 11; i < 100; i++)
	{
		if (input_n % 10 * 10 + input_n /10 == i)
			continue;
		if(input_n + i == input_n % 10 * 10 + input_n / 10 \
				+ i % 10 * 10 + i / 10)
			printf("%d + %d = %d + %d\n", input_n, i, input_n % 10 * 10 + input_n / 10, i % 10 * 10 + i / 10);
	}
}
