/*
 *
 * output yanghui triangle
 *
 */
#include <stdio.h>

int main()
{
	int i, j, k;
	int num;
	printf("input the num of the row !\n");
	scanf(" %d", &num);
	for(i = 0; i < num; i++)
	{
//		for(j = 5 - i; j > 1; j--)
//			printf(" ");
/*		j = num - i;
		while(j > 1)
		{
			printf(" ");
			j--;	
		}
*/
		for(j = num - 1; j > i; j--)
			printf(" ");

		for(k = 0; k < 2 * i + 1; k++)
			printf("$");
		printf("\n");
	}	
}
