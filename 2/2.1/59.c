/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�ָ��ʵ�����ݵĽ���
 *		Ҫ�㣺ָ���ʹ��
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>

void Swap(int *a, int *b);


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
	int a, b;
	printf("input the a:\n");
	scanf("%d", &a);
	printf("input the b:\n");
	scanf("%d", &b);
	Swap(&a, &b);
	printf("a:%d\tb:%d\n", a, b);
}



/*************************************************
	Function: 		Swap
	Description: 	��������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void Swap(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}


