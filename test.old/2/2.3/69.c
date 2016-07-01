/*
 *
 * pointer function
 *
 */
#include <stdio.h>
int cmp(int a, int b);

int main()
{
	int max, a, b;
	int (*cp)();
	cp = cmp;
	scanf(" %d%d", &a, &b);
	max = (*cp)(a, b);
	printf("%d\n", max);
}

int cmp(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
