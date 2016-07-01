/*
 *if the input can be divid by 5 and 7 then output yes
 *else output no
 */
#include <stdio.h>

int main()
{
	int input;
	scanf("%d", &input);
	if(input % 5 == 0)
		if(input % 7 == 0)
		{
			printf("yes\n");
			return 0;
		}
	printf("no\n");
	return 0;
}
