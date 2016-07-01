/*
 *
 * xyz + yzz = 522
 * output x,y,z
 *
 */

#include <stdio.h>

int main()
{
	int x, y, z;
	for (x = 1; x < 5; x++)
	{
		for (y = 1; y < 5; y++)
		{
			for (z = 0; z <= 9; z++)
				if(x * 100 + y * 10 + z + y * 100 + z * 11 == 532)
					printf("x = %d\ty = %d\tz = %d\n", x, y, z);
		}
	}
}
