/*
 * be divided by 2 leave 1
 *
 *by 3 leave 2
 *by 5 leave 4
 *by 6 leave 5
 *by 7 leave 0
 */

#include <stdio.h>

int main()
{
	int num = 0;
	while(!(num % 2 == 1 && num % 3 == 2 && num % 5 == 4 && num % 6 == 5 && num % 7 == 0))
	{
		num++;
	}
	printf("%d\n", num);
}

