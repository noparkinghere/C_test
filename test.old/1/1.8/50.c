/*
 *
 * peach number
 *
 */
#include <stdio.h>
#define DAY 10
int main()
{
	int sum, i, res;
	for(sum = 2; res != 1; sum++)
	{
		res = sum;
		for(i = 0; i < 9; i++)
		{
			res = res / 2 - 1;
//			printf("%d\n", sum);
		}
	}
	sum--;
	printf("%d\n", sum);
}
