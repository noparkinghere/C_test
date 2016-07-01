/*
 *
 *
 *
 */

#include <stdio.h>

int main()
{
	int *p, a;
	a = 2;
	p = (volatile unsigned int)0x7fff86589f84;
//	p = &a;
	printf("%d\t%p\n", *p, p);
}
