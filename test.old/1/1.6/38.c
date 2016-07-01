/*
 *
 * connect two string
 *
 */

#include <stdio.h>
#include <string.h>
int main()
{
	char a1[100], a2[100];
	int i, j;
	gets(a1);
	gets(a2);
	for(i = strlen(a1), j = 0; i <= strlen(a1) + strlen(a2); i++, j++)
	{
		a1[i] = a2[j];
	}
	puts(a1);

}
