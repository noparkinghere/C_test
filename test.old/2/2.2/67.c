/*
 *
 *
 *
 */

#include <stdio.h>

int main()
{
	int i;
	int num;
	char *a[] = {"Monday", "Tuesday", "Wednesday",
	       	"Thursday", "Friday", "Saturday", "Sunday"};

	for(i = 0; i < 7; i++)
	{
		printf("%s\t", *(a + i));
	}
	printf("\n");
	
	printf("input the day's number( 1 - 7 ):\n");
	scanf(" %d", &num);
	printf("%s\n", *(a + num - 1));
}
