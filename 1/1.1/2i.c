/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ʵ��ʮ����ת��Ϊ������
 *		Ҫ�㣺��Ҫʹ��ѭ����估���� 
 * 
 *********************************************************************************/

 
#include <stdio.h>


void OutPut(int f_iNum, int f_iBit);


/*************************************************
	Function: 		main
	Description: 	������
	Calls: 			scanf	printf	output
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int main(void)
{
	int iNum, iBit;
	printf("������һ��ʮ��������,��ָ��ת��Ϊ�����ƣ�ʹ�ÿո������\n");
	printf("please input a decimal number and give the overbit number, using the blankspace to seperate:\n");
	scanf("%d %d", &iNum, &iBit);
	OutPut(iNum, iBit);
	return 0;
}


/*************************************************
	Function: 		Output
	Description: 	��10����ת��Ϊ����������
	Calls: 			printf
	Called By:		main
	Input: 			iNum	�������ֵ
					iBit	��ת���Ľ���
	Output: 		��
	Return: 		0
*************************************************/
void OutPut(int f_iNum, int f_iBit)
{
	int a[100];
	int iCount = 0;
	int i;
	
	for (i = 0; f_iNum > 0; i++)
	{
		a[i] = f_iNum % f_iBit;
		f_iNum /= f_iBit;
		iCount++;
	}
	
	for (i = iCount; i > 0; i--)
	{
		printf("%d", a[i - 1]);
	}
	
	printf("\n");
}
