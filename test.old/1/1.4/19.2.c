/*
 *
 * a fun question, the number of chicken and rabbit is total 30,
 * and the number of the legs of  chicken and rabbit is total 90
 * cal the separate num of chicken and rabbit.
 *
 */

#include <stdio.h>

int main()
{
	int i;
	for(i = 0; i < 30; i++)
	{
		if((30 - i) * 4 + i * 2 == 90)
			break;
	}	
	printf("chicken = %d\trabbit = %d\n", i, 30 - i);
}


