/*
 *
 * one yuan to 5jiao, 1jiao, 2jiao
 *
 */

#include <stdio.h>
#define J1 1
#define J2 2
#define J5 5
#define YUAN 10

int main()
{
	int i, j, k;
	for(i = 0; i <= YUAN; i++)
		for(j = 0; j <= YUAN; j++)
			for(k = 0; k <= YUAN; k++)
				if(10 == i + j * 2 + k * 5)
					printf("1jiao : %d\t2jiao : %d\t5jiao : %d\n", i, j, k);
}
