/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ʵ��n����ת��Ϊʮ����
 *		Ҫ�㣺��Ҫʹ�����̿��Ƽ����� 
 *		ע�⣺ʵ�ֵķ�������߲��õ�������Ѹ�λֵ���룬Ȼ����ȡ���ۻ�����ۼ�
 *				��ϸ�ܽ���2.c�����֡�
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
	int iBit;
	int iNum;
	printf("����һ�����ݣ�����������ݵĽ��ƣ��ÿո����:\n");
	printf("input a number and input the bit,seperating them with blankspace:\n");
	scanf("%d %d", &iNum, &iBit);
	
	OutPut(iNum ,iBit);
}

/*************************************************
	Function: 		OutPut
	Description: 	���n����ת��Ϊ10���ƵĽ��
	Calls: 			scanf	printf	output
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void OutPut(int f_iNum, int f_iBit)
{
	int iRes = 0;
	int iArray[100];
	int i;
	for (i = 0; 0 != f_iNum; i++)
	{
		iArray[i] = f_iNum % 10;
		f_iNum /= 10;
	}
	
	for (; i > 0; i--)
	{
		iRes = iRes * f_iBit + iArray[i - 1];
	}
	printf("%d\n", iRes);
}

