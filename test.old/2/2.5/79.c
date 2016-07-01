/*
 *
 * output the month
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * sel(char **p, int n);
void pmalloc(char ***p, int num, int spare);
void putp(char ***p, int num);
void getp(char ***p, int num);
int main()
{
	char **p, *q;
	int num, spare, n;
	printf("input the number:\n");
	scanf(" %d %d", &num, &spare);
	pmalloc(&p, num, spare);
	puts("input the date");
	getchar();
	getp(&p, num);
	putp(&p, num);
	puts("input the date you want");
	scanf(" %d", &n);
	q = sel(p, n);
	printf("%s\n", q);
}

void pmalloc(char ***p, int num, int spare)
{
	int i;
	*p = (char **)malloc(sizeof(char *) * num);
	if (NULL == *p)
	{
		printf("error malloc\n");
		exit(1);
	}
	for (i = 0; i < num; i++)
	{
		*(*p + i) = (char *)malloc(sizeof(char) * spare);
		if (NULL == **p)
		{
			printf("error malloc\n");
			exit(1);
		}
	}
}
void getp(char ***p, int num)
{
	int i, j;
	for (i = 0; i < num; i++)
	{
		for (j = 0; (*(*(*p + i) + j) = getchar()) != '\n'; j++);
		*(*(*p + i) + j) = '\0';
	}
}
void putp(char ***p, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		puts(*(*p + i));
	}
}

char * sel(char **p, int n)
{
	return *(p + n - 1);

}

