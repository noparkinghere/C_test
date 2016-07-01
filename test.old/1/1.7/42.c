/*
 *
 * cal the number of a string
 *
 */
#include <stdio.h>
#include <stdlib.h>

int strlen(char *input);
int main()
{
	char *input;
	input = (char *)malloc(sizeof(char) * 1000);
	printf("input a string!\n");
	gets(input);
	printf("result:\n");
	printf("%d\n", strlen(input));
}

int strlen(char *input)
{
	int i = 0;
	while(*(input + i++) != '\0');
	return i - 1;		
}
