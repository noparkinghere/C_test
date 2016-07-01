/*
 *
 * reverse the character
 *
 */
 #include <stdio.h>

int main()
{
	char input[100];
	int i = 0;
	printf("input the sting\n");
	while('\n' != (input[i++] = getchar()));
//	printf("%s\n", input);
	for (i -= 2; i >= 0; i--)
	{
		putchar(input[i]);
	}
	putchar('\n');
}
