/*
 *
 *
 *
 */
#include <stdio.h>
int main()
{
	int i, j, k, flag, a3, a4;
	int a[10] = {0};
	puts("start");
	for(i = 1; i < 100; i++)
	{
		a3 = i * i * i;
		a4 = i * i * i * i;
		if(0 == i * i / 100)
			continue;
		if (0 == a3 / 1000)
			continue;
		if (0 == a4 / 100000)
			continue;
		flag = 0;
//		puts("error");
		for(j = 0; j < 4; j++)
		{
			a[j] = a3 % 10;
			a3 /= 10;
//			printf("%d\n", a[j]);
		}
		for(; j < 10; j++)
		{
			a[j] = a4 % 10;
			a4 /= 10;
//			printf("%d\n", a[j]);
		}
		for(j = 0; j < 10; j++)
		{
			for(k = j + 1; k < 10; k++)
			{
				if(a[j] == a[k])
				{
					flag = 1;
					break;
				}
			}
			if(1 == flag)
				break;
		}
		if(0 == flag)
		{
			for(j = 0; j < 10; j++)
			{
				printf("%d\t", a[j]);
			}
		//	printf("\n");
			printf("%d\n", i);
		//	break;
		}
	}
}

