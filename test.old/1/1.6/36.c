/*
 *
 * substitute  the  string
 *
 */

#include <stdio.h>

int main()
{
	char input[100];
	int num, tmp, i = 0;

	puts("input a string");
//	scanf(" %s", input);
	while('\n' != (tmp = getchar()))
		input[i++] = tmp;

	puts("input the position");
	scanf(" %d", &num);
	
	puts("input the insert string");
	getchar();
	while('\n' != (tmp = getchar()))
	{
		input[num++] = tmp;
	}
	puts(input);
}
