/*
 *
 * get the number of stamp 
 *
 */
#include <stdio.h>

int main()
{
	int num, x;
	for(num = 35; num < 10000 ; num += 35)
	{
		for(x = 0; x < 7; x++)
		{
			if(303 == num * 4 / 5 - num * x / 7)
				printf("%d\t%d\t%d\t%d\n", num, num * 1 / 10, num * x / 7, 303);
		}
	}
}
