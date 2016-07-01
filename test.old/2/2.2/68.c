/*
 *
 *
 *
 */
#include <stdio.h>

int main()
{
	char **p;
	int num;
	printf("input the numbers of the string:\n");
	scanf(" %d", &num);
	*p = (char *)malloc(sizeof(char) * 100);
	p = (char **)malloc(sizeof(char) * 100 * num);

	for(i = 0; i < num; i++)
	{
		scanf(" %s", (*p + i));
	}

	sort(p, num);
}

void sort(char **p, int num)
{
	for(i = 0; i < num; i++)
	{
		for(j = i + 1; j < num; j++)
		{
			if(*(*(p + i)) > *(*(p + j)))
			{
				swap(p + i, p + j);	
			}
		}
	}
}

void swap(char *p, char *q)
{
	char *tmp = (char *)malloc(sizeof(char) * 100);

}
