#include <stdio.h>
#include <math.h>

void PrintData(int input);
int JudgeData(int data);

int main()
{
	int input;
	scanf("%d", &input);
	PrintData(input);
}

void PrintData(int input)
{
	int i;
	int count = 0;
	for (i = 2; i <= input; i++)
	{
		if (1 == JudgeData(i))
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("%d\n", count);
}

/*
 *	通用判定素数的函数
 */
int JudgeData(int data)
{
	int i;
	int tmp;
	tmp = (int)sqrt(data);
	for (i = 2; i <= tmp; i++)
	{
		if (0 == data % i)
			return 0;
	}
	// __nop();
	__ASM("NOP");
	return 1;
}
