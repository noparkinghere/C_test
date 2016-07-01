/*
 *
 *
 *
 */

#include <stdio.h>
#define N 10
#define SWAP(a,b)	{int tmp; \
			tmp = a; \
			a = b; \
			b = tmp; }
		

int main()
{
	int i;
	int a[N], b[N];
	printf("input the array a:\n");
	for(i = 0; i < N; i++)
	{
		scanf(" %d", &a[i]);
	}
	printf("input the array b:\n");
	for(i = 0; i < N; i++)
	{
		scanf(" %d", &b[i]);
	}
	printf("output the array a:\n");
	
	for(i = 0; i < N; i++)
		SWAP(a[i],b[i]);
	for(i = 0; i < N; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	printf("output the array b:\n");
	for(i = 0; i < N; i++)
	{
		printf("%d\t", b[i]);
	}
	printf("\n");
}

