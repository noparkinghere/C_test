/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����Ԫһ�β�������
 *		Ҫ�㣺��ѧ�������
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int Res(int a, int b, int c);
int fun1(int num1, int num2);



/*************************************************
	Function: 		main
	Description: 	������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int main(void)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	Res(a, b, c);
}

/************************************************
	Function: 		fun1
	Description: 	�����Լ��
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int fun1(int num1, int num2)
{
	int tmp;
	int i;
	int res;
	tmp = (num1>num2 ? num2 : num1);
	for (i = 1; i <= tmp; i++)
	{
		if (num1%i == 0 && num2%i == 0)	
		{
			res	= i;
		}
	}
	return res;
}


/************************************************
	Function: 		Res
	Description: 	������������������
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int Res(int a, int b, int c)
{
	int x, y;
	if (fun1(a, b) % c != 0)
	{
		printf("no value!\n");
		return 0;
	}
	else
	{
		for (x = 1; ; x++)
		{
			if ((c-a*x) % b == 0)
			{
				// printf("%d\t", x);
				break;
			}
			else if ((c+a*x) % b == 0)
			{
				x = -x;
				break;
			}
		}
		y = (c-a*x) / b;
	}
	printf("x = %d, y = %d\n", x, y);

}


