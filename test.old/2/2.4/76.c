/*
 *
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void insert(char *p, char *q, int num);
int main()
{
	char *p, *q;
	int i, num;
	p = (char *)malloc(sizeof(char) * 100);
	q = (char *)malloc(sizeof(char) * 100);
	puts("input P:");
	for(i = 0; (*(p + i) = getchar()) != '\n'; i++);
	*(p + i) = '\0';
	puts("input Q:");
	for(i = 0; (*(q + i) = getchar()) != '\n'; i++);
	*(q + i) = '\0';
	puts("your insert position:");
	scanf(" %d", &num);
	insert(p, q, num);
	printf("%s\n", p);
}

void insert(char *p, char *q, int num)
{
	int i, j;
	int tmp = strlen(p) + strlen(q);
	for (i = strlen(p) - 1, j = strlen(p) + strlen(q) - 1; \
	   	i >= num - 1; i--, j--)
	{
		*(p + j) = *(p + i);
	}
	for (i = num - 1, j = 0; j < strlen(q); i++, j++)
	{
		*(p + i) = *(q + j);
	} 
	*(p + tmp) = '\0';

}
