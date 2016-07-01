#include <stdio.h>

int test430(float value);

int main(void)
{
	float value;
	printf("input the value:\n");
	scanf("%f", &value);
	test430(value);
}

int test430(float value)
{
	printf("%d\n", value);
}
