/*
 *
 *
 *
 */
#include <stdio.h>
int cal(int num);
int main()
{
	int num;
	int result;
	printf("input the number:\n");
	scanf(" %d", &num);
	result = cal(num);
	printf("%d\n", result);
}

int cal(int num)
{
	if(num == 1)
		return 10;
	else 
	{
		num--;
		return 2 + cal(num);
	}
}
