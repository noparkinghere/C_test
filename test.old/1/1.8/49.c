/*
 *
 * cal the average price
 *
 */
#include <stdio.h>
#define UNIT 0.8


int main()
{
	int i, tmp, sum;
	float ave;
	for(i = 1, tmp = 2, sum = 0; sum <= 100; i++)
	{
		sum += tmp;
		tmp *= 2;
	}
	i--;
	ave = (float)(sum * UNIT / i);
	printf("%d\t%d\t%.2f\n", i, sum, ave);
}
