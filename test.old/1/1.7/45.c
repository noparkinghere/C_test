/*
 *
 * cal
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
int main()
{
	char *input;
	char *output;
	if(!((input = (char *)malloc(sizeof(char) * N)) \
		&& (output = (char *)malloc(sizeof(char) * N))))
	{
		printf("malloc error!\n");
		exit(1);
	}
	scanf("%s", input);
	cal(input, output);
	free(input);
	free(output);
	printf("%s\n", output);
}

void cal(char *input, char * output)
{
	int num[4];
	char c;
	chg(input, num, &c);// change the string to num and symbol
	gbs = gb(num[1], num[3]);
	res(num, &gbs, c);
	printf("result: %d / %d\n", fz, gbs);
}

void chg(char *input, int *num, char *c)
{
	for(n = 0; n < 4; n++)
	{
		while(input[i] >= '0' && input[i] <= '9')
		{
			num[n] = num[n] * 10 + input[i++];	
		}
	
		if(1 == n)
			*c = input[i];
		i++;
	}

}


