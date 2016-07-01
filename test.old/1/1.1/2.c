#include <stdio.h>

int main()
{
	int c;
	int i;
	int a[5000];
	scanf("%d",&c);
	for(i = 0; c > 0; i++)
	{
		a[i] = c % 2;
		c /= 2;
	}
		
	for(--i; i >= 0; i--)
	{
		c = 10 * c + a[i];
	}
	printf("%d",c);
	
}
