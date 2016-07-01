/*
 *
 * 5 * 5 quare
 *
 */
#include <stdio.h>

int main()
{
	int a[5][5] = {0};
	int i, j;
	int x = 0, y = 2;
	for(i = 1; i <= 25; i++)
	{
		a[x][y] = i;
		x--;
		y++;
		if(x + 1 == 0)
		{
			x = 4;
		}	
		if(y - 1 == 4)
		{
			y = 0;
		}
		if((x + 1 == 0 && y - 1 == 4) || (a[x][y] != 0))
		{
			x = x + 2;
			y--;
		}
	}

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
