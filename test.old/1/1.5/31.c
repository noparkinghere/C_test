/*
 *
 * reverse the array
 * 
 */

#include <stdio.h>

int main()
{
	int row, column;
	int i, j;
	int a[100][100];
	printf("row:\n");
	scanf(" %d", &row);
	printf("column:\n");
	scanf(" %d", &column);
	
	for(i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
			scanf(" %d", &a[i][j]);
	}

	for (i = 0; i < row; i++)
	{
		for(j = 0; j < column; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

	for (j = 0; j < column; j++)
	{
		for (i = 0; i < row; i++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}
