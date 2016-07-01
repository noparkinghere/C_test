/*
 *
 * insert string to a especial position
 *
 */
#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, po, len, len1;
	char input[100], insert[100];
	puts("enter the string!");
	gets(input);
	puts("the insert string:");
	gets(insert);
	puts("the position:");
	scanf(" %d", &po);
	len = strlen(input);
	len1 = strlen(insert);
	for(i = len; i >= po - 1; i--)
	{
		input[i + len1] = input[i];
	}

	for(i = po - 1, j = 0; j < len1;  i++, j++)
	{
		input[i] = insert[j];
	}
	puts(input);
}
