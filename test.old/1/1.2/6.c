/*
 *input two number if a2 + b2 > 100 then output the result of a2 + b2
 *else output the result of a + b
 *
 */

#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a * a + b * b > 100)
	{
		printf("%d", a * a + b * b);
	}
	else
		printf("%d \n", a + b);
	//printf("\n");
	return 0;
}

