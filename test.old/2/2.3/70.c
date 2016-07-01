/*
 *
 *
 *
 */

#include <stdio.h>
int *max(int *a);
int main()
{
	int *tmp;
	int a[] = {1,2,45,3,53,3};
 	tmp = max(a);
	printf("%p\t%d\n", tmp, *tmp);
}

int * max(int * a)
{
	int tmp = a[0], num, i;
	for(i = 0; i < 6; i++)
	{
		if(tmp < a[i])
		{
			tmp = a[i];	
			num = i;
		}
	}
	return &a[num];
}
