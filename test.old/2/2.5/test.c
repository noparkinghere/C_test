#include <stdio.h>

int main()
{
	volatile unsigned int *p;
	int a;
//	(int*) q;
	char *m;
	char n[15];
       	m = "hello world";
	a = 3;
//	p = (volatile unsigned int *)0x7fff96bec514;
//	*p = 5;
//	q = &a;
	//*q = 2;
	printf("%s\t%p\n", n, n);	
	m = "bad";
	n = "bad";
	printf("%s\t%p\n", n, n);
//	printf("%d\t%p\t%p\n", a, &a, p);
}
