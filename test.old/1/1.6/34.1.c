/*
 *
 * addition
 *
 */

#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char input[100];
	printf("input an English string\n");
	scanf("%s", input);
	printf("%d\n", sizeof(input));
	for(i = 0; i < strlen(input); i++)
	{
		//input[i] += 5;
		putchar(input[i] + 5);
	}
	putchar('\n');
}
