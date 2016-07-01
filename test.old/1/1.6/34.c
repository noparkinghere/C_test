/*
 *
 * cal all kinds of characters
 *
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	int i;
	int tmp;
	int c = 0, space = 0, digit = 0, others = 0;
//	printf("input your chars\n");
//	scanf("%s", a);	//error function
	puts("input your chars");
	gets(a);
//	printf("%s\n", a);
	puts(a);
	printf("%d\n", strlen(a));

	for (i = 0; i < strlen(a); i++)
	{
		if(a[i] >= '0' && a[i] <= '9')
			digit++;
		else if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
			c++;
		else if(' ' == a[i])
			space++;
		else
			others++;
	}
	printf("char:%d\tspace:%d\tdigit:%d\tothers:%d\n", c, space, digit, others);

}
