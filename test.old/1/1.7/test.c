/*
 *
 *
 *
 */
#include <stdlib.h>
#include <stdio.h>
#define N 10000000000000
int main()
{
//	char *p = "idsjlksdjfdkf";
//	int q[] = {1,2,3,4};
	int *a, i;
	if(!(a = (int *)malloc(sizeof(int) * N)))
	{
		printf("malloc fail: %d\n", a);
		exit(1);
	}
/*	
	printf("%d\n", sizeof(a));
	for(i = 0; i < N + 1; i++)
	{
		a[i] = i;
	}
	free(a);
	
	for(i = 0; i < N + 1; i++)
		printf("%d", *(a + i));
	printf("\n");*/
	/*
	printf("%s\n", p);
	scanf(" %s", p);
	printf("%s\n", p);
	printf("%p\n", p);
	printf("%p\n", p + 1);
//	printf("%d %d\n",*q, *(q + 1));
//	printf("%p\n", q);
//	printf("%p\n", q + 1);
*/
}
