/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�������������
 *		Ҫ�㣺���������̿��ƣ�math����ã���Ҫע������Ľ���˼·�ص㡣
 * 		�ص㣺����������ǰ�������ģ���˺����϶������ڵĴ�ѭ�����������������ʵ
 *		�Ǵ�-1~1�����и�ɶ�ݵġ���ÿ�ж�Ӧ��λ�þ���Ҫ�����Ǻ����������ˣ�ע��
 *		һ���ж�Ӧ�����㣬acos��ֻ�����һ���㣬�ڶ������Ƶ��������ݾ��庯��������
 *
 ********************************************************************************/

 
#include <stdio.h>
#include <math.h>


#define PI 3.14

void PrintCos(char f_sym, int f_x);
void PrintSin(char f_sym, int f_x);


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
	char sym;
	int x;
	printf("input the symbol:\n");
	scanf("%c %d", &sym, &x);
	PrintCos(sym, x);
	printf("\n");
	PrintSin(sym, x);
}


/*************************************************
	Function: 		PrintCos
	Description: 	cos������ӡ
	Calls: 			printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void PrintCos(char f_sym, int f_x)
{
	float i;
	int	j;
	int a, b;
	
	//for�д�ѭ����������Լ����Ǻ��������Сֵ��ϵ
	for (i = 1.0; i > -1.0; i -= 0.1)
	{
		a = (int)(acos(i) * f_x);
		
		//�ر�ע�������2����a��1����a�Ƕ�Ӧ�����꣬
		//����Ϊ��һ��ǰ���Ѿ��ճ���λ��
		b = (int)(2 * PI * f_x) - a * 2;	
		
		for (j = 0; j < a; j++)
			printf(" ");
		printf("%c", f_sym);
		for (j = 0; j < b; j++)
			printf(" ");
		printf("%c", f_sym);	
		printf("\n");
	}
}


/*************************************************
	Function: 		PrintCos
	Description: 	cos������ӡ
	Calls: 			printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void PrintSin(char f_sym, int f_x)
{
	float i;
	int	j;
	int a, b;
	

	//���Һ����贫���ηֱ���
	for (i = 1.0; i > 0; i -= 0.1)
	{
		a = (int)(asin(i) * f_x);
		b = (int)(PI * f_x) - a * 2;
		for (j = 0; j < a; j++)
			printf(" ");
		printf("%c", f_sym);
		for (j = 0; j < b; j++)
			printf(" ");
		printf("%c", f_sym);		
		printf("\n");
	}
	for (i = 0; i > -1; i -= 0.1)
	{
		a = (int)((PI - asin(i)) * f_x);
		b = (int)(3 * PI * f_x) - a * 2;
		// for (j = 0; j < int(PI * f_x); j++)
			// printf(" ");
		for (j = 0; j < a; j++)
			printf(" ");
		printf("%c", f_sym);
		for (j = 0; j < b; j++)
			printf(" ");
		printf("%c", f_sym);	
		printf("\n");
	}
	
}
