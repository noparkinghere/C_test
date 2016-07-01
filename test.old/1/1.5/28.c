/*
 *
 * input the number of the candidate.
 * output the everyone's total ballots
 *
 */

#include <stdio.h>
#define NUM 3

int main()
{
	int input_n[15];
	int i;
	int a1 = 0, a2 = 0, a3 = 0, other = 0;
	printf("input the ballots!\n");
	for(i = 0; i < 15; i++)
	{
		scanf(" %d", &input_n[i]);
		switch (input_n[i])
		{
			case 1 : a1++;
				break;
			case 2 : a2++;
				break;
			case 3 : a3++;
			   	break;
			default:other++;
				break;
		}
	}
	printf("num1:%d\nnum2:%d\nnum3:%d\nother:%d\n", a1, a2, a3, other);
}
