/*
 *
 * add oil
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float price(char *input);
int main()
{
	float res;
	char *input;
	input = (char *)malloc(sizeof(char) * 100);
	printf("input your service!\n");
	scanf("%s", input);
	res = price(input);
	free(input);
	printf("%.2f\n", res);
}

float price(char * input)
{
	float per, bud = 1.0;
	float res;
	int i = 0, kg = 0;
	printf("%s\n", input);
	while(input[i] != ',')
	{
		kg = kg * 10 + input[i] - '0';
		i++;
	}
	i++;
	switch(input[i++])
	{
		case 'a': per = 3.25;
			  break;
		case 'b': per = 3.0;
			  break;
		case 'c': per = 2.75;
			  break;

	}
	i++;
	if('m' == input[i])
		bud = 0.95;
	printf("%d,%.2f,%.2f\n", kg , per, bud);
	res = bud * kg * per;
	return res;
}
