/*
 *
 * offset 
 *
 */
#include <stdio.h>
#define OF(a, b) if(b < 0) \
		a = a << b | a >> 16 - b ; \
		else a = a >> b | a << 16 - b;
int main()
{
	unsigned short input;	// warning : unsigned short
	int i;
	printf("%d\n", sizeof(unsigned short));
	printf("input a number\n");
	scanf(" %o", &input);
	printf("input the offset\n");
	scanf(" %d", &i);
	OF(input, i);
	printf("%x,%o\n", input, input);
}

