/*
 *
 * bit cal
 *
 */

#include <stdio.h>
#define AND(a, b) a & b
#define OR(a, b) a | b
#define YI(a, b) a ^ b
#define NOT(a) ~a

int main()
{
	int a = 2, b = 4, c = 6, d = 8;
	printf("%x\t%x\t%x\t%x\n", \
			AND(a, c), OR(b, d), \
			YI(a, d), NOT(a));
}

