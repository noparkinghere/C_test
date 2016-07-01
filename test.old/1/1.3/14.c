/*
 *
 * output graph with *
 *
 */
#include <stdio.h>

int main()
{
	int row;
	char c;
	int i, j;
	printf("the number of the row\n");
	scanf(" %d", &row);
	printf("input the character\n");
//	printf("\n");
	scanf(" %c", &c);	// here if no ' ' before %c the program cannot run correctly
//	printf("%c", c);
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < i; j++)
			printf(" ");
		for (j = 0; j < row; j++)
			printf("%c", c);
		printf("\n");
	}
	
}
