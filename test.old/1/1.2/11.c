/*
 *
 * input + or - and define the max random number 
 * output the result of the random two number	
 * 
 */
#include <stdio.h>

int main()
{
	char input;
	int num;
	int a,b;
	
	srand((unsigned long)time(0));	// set sys time creat different random num
	printf("input '+' or '-'!\n");
//	scanf("%d", &input);
	scanf("%c", &input);	// warning: %c not %d
//	printf("%d\n", input);
//	printf("%c\n", input);
	printf("input the max random num!\n");
	scanf("%d", &num);
	while((a = rand()) > num);
	while((b = rand()) > num);

	if(input == '+')
		printf("%d %d %d", a, b, a + b);
	else if(input == '-')
		printf("%d %d %d", a, b, a - b);
	else 
		printf("error input");
	printf("\n");

}
