#include <stdio.h>
void show();

int main()
{
	show();	// LCD display the starting UI


}

void show()
{
	int i;
	char a[20] = "*Please select key";
	char b[20] = "*1.password";
	char c[20] = "*2.get money";
	char d[20] = "*3.return";
	for(i = 0; i < 20; i++)
		printf("*");
	printf("\n");
	for(i = 0; i < 20; i++)
	{
		if(b[i] = '\0')
		{
			while(i < 20)
			{
				b[i] == ' ';
				i++;
			}
		}
	}
	b[19] = '\0';
	printf("%s\n", c);

}
