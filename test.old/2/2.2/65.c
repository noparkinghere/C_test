/*
 *
 *
 *
 */

#include <stdio.h>

int main()
{
	int row , column;
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	printf("input the show number:\n");
	scanf(" %d%d", &row, &column);
	
	printf("a[%d][%d]: %d\n", row, column, a[row - 1][column - 1]);
}
