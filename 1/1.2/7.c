/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ��ж�һ�����Ƿ���5�ı�����ͬʱҲ��7�ı���
 *		Ҫ�㣺�����ж�����ʹ�ã���ͨ�ú��� bool Ϊc99��������
 * 
 ********************************************************************************/

 
#include <stdio.h>

bool JudgeDev(long f_input, int num);	//bool Ϊc99��������


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
	long input;
	printf("input the  number:\n");
	scanf("%ld", &input);
	if (JudgeDev(input, 5) && JudgeDev(input, 7))
	{
		printf("yes\n");
	}	
	else 
		printf("no\n");
}

bool JudgeDev(long f_input, int num)
{
	if (0 == f_input % num)
		return true;
	else
		return false;
}

