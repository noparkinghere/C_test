/*
 *
 * output the sort string
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(char ***p, int num);
void pmalloc(char ***p, int num, int spare);
void putp(char ***p, int num);
void getp(char ***p, int num);
int main()
{
	char **p;
	int num, spare;
	printf("input the number:\n");
	scanf(" %d %d", &num, &spare);
	pmalloc(&p, num, spare);
	puts("input the string");
	getchar();
	getp(&p, num);
//	putp(&p, num);
	puts("output sort string");
	sort(&p, num);
	putp(&p, num);
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

void  sort(char ***p, int num)
{
	char *tmp;
	int i, j, k;
	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num; j++)
		{
			for (k = 0; (*(*(*p + i) + k)) != '\0' \
					       && (*(*(*p + j) + k)) != '\0'; k++)
			{
				if((*(*(*p + i))) > (*(*(*p + j) + k)))
				{
					tmp = *(*p + j);
					*(*p + j) = *(*p + i);
					*(*p + i) = tmp;
				}			
			}

		}
	}
}

