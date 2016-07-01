/*
 *
 * ball drop
 *
 */

#include <stdio.h>
int main()
{
	int num, i;
	float l, h;
	scanf(" %f%d", &l, &num);
	h = l;
	for(i = 0; i < num; i++)
	{
		h = h / 2;
		l += h * 2;
	}
	printf("%.2f", l);
}
