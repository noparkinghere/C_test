/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�while�����n�Ľ׳�
 *		Ҫ�㣺����while��������ã�����˼·���㷨
 * 		�ص㣺ע���forѭ���Ĳ�𣬿����໥ת��������Ҫ��ʼ�����ۼӡ�
 *
 ********************************************************************************/

 
#include <stdio.h>

int Factorial(int f_num);


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
	int num;
	int res;
	printf("input the number:\n");
	scanf("%d", &num);
	res = Factorial(num);
	printf("%d\n", res);
}

/*************************************************
	Function: 		Factorial
	Description: 	��׳˵ĺ���
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		�׳˽��
*************************************************/
int Factorial(int f_num)
{
	int i = 1;			//ע���ʼ��
	int res = 1;
	while (i <= f_num)
	{
		res *= i;
		i++;			//ע���ۼ�
	}
	return res;
}

