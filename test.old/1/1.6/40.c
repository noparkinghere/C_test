/*
 *
 * put string a and string b into the c  by sort
 *
 */

#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0, j = 0, k = 0;
	char a[100];
	char b[100];
	char c[100];
	puts("a:");
	gets(a);
	puts("b:");
	gets(b);
//	puts(a);
//	puts(b);
	puts("result:");
	while(!('\0' == a[i] && '\0' == b[j]))
	{
		while(!('\0' == a[i] || '\0' == b[j]))
		{
			if(a[i] >= b[j])
				c[k++] = b[j++];
			else 
				c[k++] = a[i++];
			
		}
		while('\0' != a[i])
			c[k++] = a[i++];
		while('\0' != b[j])
			c[k++] = b[j++];

	}
//	printf("error");
	c[k] = '\0';
	puts(c);
//	printf("%s", c);
}
