/*
 *
 * add from 1 to n
 * output the result...........
 *
 */

#include <stdio.h>

int main()
{
	int input_n, i = 1, result;
	printf("please input the num!\n");
	scanf(" %d", &input_n);
	result = 0;
	while(i <= input_n)
	{
		result += i;
		i++;
	}
	printf("%d", result);
}
