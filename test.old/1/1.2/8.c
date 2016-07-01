/*
 *input the year and judge if the year is the leap year?
 *
 *
 */
#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);

	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d\n", year);
		return 0;
	}
	printf("no\n");
}

