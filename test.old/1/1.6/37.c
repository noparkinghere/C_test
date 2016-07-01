/*
 *
 * judge the string is over or not
 *
 */

#include <stdio.h>
#include <string.h>


int main()
{
	char input[100];
	int len, i;
	gets(input);
	len = strlen(input);
	for(i = 0; i < len / 2; i++)
	{
		if(input[i] != input[len - 1 - i])
		{
			printf("no\n");
			return 0;
		}	
	}
	printf("yes\n");
}
