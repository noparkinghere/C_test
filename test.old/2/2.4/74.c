/*
 *
 * copy pointer to pointer
 *
 */
#include <stdio.h>
#include <stdlib.h>

void cp(char *p, char *q);
int main()
{
	char *p, *q;
	q = p = (char *)malloc(sizeof(char) * 100);
	puts("input the string:");
	scanf(" %s", p);
	cp(p, q);
	printf("%s\n", q);
}

void cp(char *p, char *q)
{
	int i;
	while('\0' != *(p + i))
	{
		*(q + i) = *(p + i);
		i++;	
	}
	*(q + i) = '\0';
}
