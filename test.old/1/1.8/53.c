/*
 *
 * one hundred to chicken
 *
 */

#include <stdio.h>
#define ALL 100
#define M 5
#define F 3
#define C 1
int main()
{
	int i, j, k;
	for(i = 0; i < 100; i++)
		for(j = 0; j < 100; j++)
			for(k = 0; k < 100; k++)
			{
				if(100 == i + j + 3 * k)
					if(ALL == i * M + F * j + C * k)
						printf("%d\t%d\t%d\n", i, j, 3 * k);
			}
}
