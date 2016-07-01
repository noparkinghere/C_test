/*
 *
 * output some graph
 *
 */
#include <stdio.h>

int main()
{
	int row;
	int i, j;
	scanf(" %d", &row);
	printf("%d\n", row);
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < row; j++)
		{
			if(j == row -i -1)
				printf("1");
			else 
				printf("0");
		}
		printf("\n");
	}
}
	
