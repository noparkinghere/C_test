/*
 *
 * get the students' scores
 *
 */

#include <stdio.h>
#include <stdlib.h>
//int *sel(int a[][3], int num);
int * sel(int **a, int num);

int main()
{
	int i, j, num, m, n;
	int *p;
//	int a[][3] = {{90, 88, 98},{89, 80, 78},{60, 59, 45}};
	int **a;
	printf("input m and n:\n");
	scanf("%d%d", &m, &n);
//	*a = (int *)malloc(sizeof(int) * m);  //error function
	a = (int **)malloc(sizeof(int *) * n);

	for (i = 0; i < n; i++)
	{
		*(a + i) = (int *)malloc(sizeof(int) * m);
	}
	printf("input the scores:\n");	

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf(" %d", (*(a + i) + j));
		}
	}

	printf("enter the number:\n");
	scanf("%d", &num);
	p = sel(a, num);
	for(i = 0; i < m; i++)
		printf("%d\t", *(p + i));
	printf("\n");
}

//int * sel(int a[][3], int num)
int *sel(int **a, int num)
{
	return *(a + num);
}
