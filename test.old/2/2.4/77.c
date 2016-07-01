/*
 *
 * match the string
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pstrlen(char *p);
int match(char *p, char *q);
void p_malloc(char **p, int n);
int main()
{
	char *p, *q;
	int found, n, i;
	puts("input the num:");
	scanf(" %d", &n);

	p_malloc(&p, n);
	p_malloc(&q, n);
	puts("P:");
	getchar();
	for (i = 0; (*(p + i) = getchar()) != '\n'; i++);
	*(p + i) = '\0';
//	printf("p:%s\n", p);
	puts("Q:");
	for (i = 0; (*(q + i) = getchar()) != '\n'; i++);
	*(q + i) = '\0';
//	puts(q);

	found = match(p, q);
	if (found)
		printf("the string has been found : %d\n", found);
	else 
		printf("no match string\n");

	free(p);
	free(q);
	p = q = NULL;
}

void  p_malloc(char **p, int n)
{
	*p = (char *)malloc(sizeof(char) * n);
	if (NULL == p)
	{
		printf("error malloc\n");
		exit(1);
	}
}

int match(char * p, char *q)
{
	int i, j;
	puts(p);
	puts(q);
	for (i = 0; i < pstrlen(p); i++)
	{
		for (j = 0; j < pstrlen(q) && *(p + i + j) == *(q + j); \
			       j++);
		if (j == pstrlen(q))
		{
//			printf("%d", i + 1);	
			return i + 1;
		
		}
	}
	return 0;
}

int pstrlen(char *p)
{
	int i;
	for (i = 0; *(p + i) != '\0'; i++);
	return i;	
}
