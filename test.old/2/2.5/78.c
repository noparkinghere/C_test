/*
 *
 * pointer output string
 *
 */
#include <stdio.h>

int main()
{
	int i;
	char **p = {"hello world!", \
		"c program","I am great","best work" \
			};
	for (i = 0; i < 4; i++)
	{
		puts(*(p + i));
	}
}
