/*
 *
 * count the number of the light tower
 *
 */

#include <stdio.h>
#define TOA 765
#define FLO 8

int main()
{
	int i, j;
	int sum = 0, n;
	for(i = 0; sum != TOA; i++)
	{
		n = i;
		sum = 0;
		for(j = 0; j < FLO; j++)
		{
			sum += n;
			n = n * 2;	
//			printf("%d %d %d\n",i, n, sum);
		}
	}
	i--;
	n /= 2;
	printf("%d,%d\n", i, n);
}
