/*
 *
 * del the continual string
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char input[100];
	int i, j;
	int num1, num2;
	puts("input the string");
	gets(input);
	puts("position:");
	scanf(" %d", &num1);
	puts("num:");
	scanf(" %d", &num2);

	for(i = num1 - 1, j = num2 + num1 - 1; j < strlen(input); i++, j++)
	{
		input[i] = input[j];
	}
	input[i] = '\0';
	puts(input);
}
