/*
 *
 * find the max and the min 
 * exchange the max and min
 * print all the data
 *
 */
#include <stdio.h>

int main()
{
	int input_n, num[100];
	int i;
	int min, max, tmp_max, tmp_min, tmp;

	printf("input the num!\n");
	scanf(" %d", &input_n);
	
	printf("input the data!\n");
	for(i = 0; i < input_n; i++)
	{
		scanf(" %d", &num[i]);
	}

	min = max = num[0];
	for(i = 0; i < input_n; i++)
	{
		if(min > num[i])
		{
			min = num[i];
			tmp_min = i;
		}
		if(max < num[i])
		{
			max = num[i];
			tmp_max = i;
		}
	}
	
	tmp = num[tmp_min];
	num[tmp_min] = num[tmp_max];
	num[tmp_max] = tmp;

	for(i = 0; i < input_n; i++)
	{
		printf("%d\t", num[i]);
	}
	printf("\n");

}
