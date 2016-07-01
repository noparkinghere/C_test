/*
 *
 * connect the string
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void connect(char *p, char *q, char *r);

int main()
{
	char *p, *q, *r;
	int i;
	r = (char *)malloc(sizeof(char) * 100);
	p = (char *)malloc(sizeof(char) * 100);
	q = (char *)malloc(sizeof(char) * 100);
	puts("input p:");
	for(i = 0; (*(p + i) = getchar()) != '\n'; i++);
	*(p + i) = '\0';
	puts("input q:");
//	getchar();
	for(i = 0; (*(q + i) = getchar()) != '\n'; i++);
	*(q + i) = '\0';
//	printf("%s\t%d\n", q, strlen(q));
	connect(p, q, r);
	printf("%s\n", r);
	free(p);
	free(q);
	free(r);
 	q = r = p = NULL;

}

void connect(char *p, char *q, char *r)
{
	int i, j;
	for (i = 0; i < strlen(p); i++)
	{
		*(r + i) = *(p + i);
	}

	for (i = 0, j = strlen(p); i < strlen(q); i++, j++)
	{
		*(r + j) = *(q + i);
	}

	*(r + j) = '\0';

}
