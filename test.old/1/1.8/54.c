/*
 *
 * get the color ball
 *
 */
#include <stdio.h>
#define R 3
#define W 3
#define B 6
int main()
{
	int i, j, k;
	for(i = 0; i <= R; i++)
		for(j = 0; j <= W; j++)
			for(k = 0; k <= B; k++)
			{
				if(8 == i + j + k)
				{
					printf("%d\t%d\t%d\n", i, j, k);
				}
			}
}
