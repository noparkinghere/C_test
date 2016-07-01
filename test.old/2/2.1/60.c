/*
 *
 * sort the numbers
 *
 */
#include <stdio.h>
#include <stdlib.h>
//#define N 1000
void sort(int *a, int num);

int main()
{
	int *a, num, i;
	printf("output the number:\n");
	scanf(" %d", &num);
	a = (int *)malloc(sizeof(int) * num);
	if(NULL == a)
	{
		printf("malloc error\n");
		exit(1);
	}
	printf("input the content\n");	
	for(i = 0; i < num; i++)
	{
		scanf(" %d", &a[i]);
	}
	sort(a, num);
	for(i = 0; i < num; i++)
		printf("%d\t", a[i]);
	printf("\n");
}

void sort(int *a, int num)
{
	int i, j, tmp;
	for(i = 0; i < num; i++)
	{
		for(j = i; j < num; j++)
		{
			if(a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
