/*
 *
 * sort 
 *
 */
#include <stdio.h>
#define N 10

void reverse(int *a);
int main()
{
	int a[N];
	int i;
	for(i = 0; i < N; i++)
	{
		scanf(" %d", &a[i]);
	}
	reverse(a);
	for(i = 0; i < N; i++)
	{
		printf("%d\t", a[i]);

	}
	printf("\n");
}

void reverse(int *a)
{
	int tmp, i;
	for(i = 0; i < N / 2; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + N - i - 1);
		*(a + N - i - 1) = tmp;
	}
}
