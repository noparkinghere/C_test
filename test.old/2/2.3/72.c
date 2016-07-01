/*
 *
 * find the array
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int * search(int *p, int num, int n);
int main()
{
	int *p, *po;
	int i, num, n;
	puts("input the number:");
	scanf(" %d", &num);
	p = (int *)malloc(sizeof(int) * num);
	puts("input the contents");
	for(i = 0; i < num; i++)
	{
		scanf(" %d", p + i);
	}

	puts("input the search number");
	scanf(" %d", &n);
	po = search(p, num, n);
	printf("the address: %p, %p", p, po);
	printf("\n");

}

int * search(int *p, int num, int n)
{
	int i;
	for(i = 0; i < num; i++)
	{
		if (n == *(p + i))
			return p + i;
	}
	return 0;
}
