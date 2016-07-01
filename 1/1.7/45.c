/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���������������
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>



void OutputCal(int value11, int value12, int value21, int value22, char sign);
void Plus(int value11, int value12, int value21, int value22);
void Minus(int value11, int value12, int value21, int value22);
void Multi(int value11, int value12, int value21, int value22);
void Divid(int value11, int value12, int value21, int value22);



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
	int value11, value12, value21, value22;
	char sign;
	while(1)
	{
		//�����ʽ�磺1/2 + 1/3   +ǰ���пո�
		scanf("%d/%d %c %d/%d", &value11, &value12, &sign, &value21, &value22);
		OutputCal(value11, value12, value21, value22, sign);	
	}
}


/*************************************************
	Function: 		OutputCal
	Description: 	������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void OutputCal(int value11, int value12, int value21, int value22, char sign)
{
	if (sign == '+')
		Plus(value11, value12, value21, value22);
	else if (sign == '-')
		Minus(value11, value12, value21, value22);
	else if (sign == '*')
		Multi(value11, value12, value21, value22);
	else if (sign == '/')
		Divid(value11, value12, value21, value22);
	else 
		printf("error input\n");
}


/*************************************************
	Function: 		Plus
	Description: 	������
	Calls: 			scanf	printf
	Called By:		OutputCal
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void Plus(int value11, int value12, int value21, int value22)
{
	int res1, res2;
	res1 = value11 * value22 + value21 * value12;
	res2 = value12 * value22;
	printf("%d/%d\n", res1, res2);
}

/*************************************************
	Function: 		Minus
	Description: 	������
	Calls: 			scanf	printf
	Called By:		OutputCal
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void Minus(int value11, int value12, int value21, int value22)
{
	int res1, res2;
	res1 = value22 * value11 - value21 * value12;
	res2 = value12 * value22;
	printf("%d/%d\n", res1, res2);	
}

/*************************************************
	Function: 		Multi
	Description: 	������
	Calls: 			scanf	printf
	Called By:		OutputCal
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void Multi(int value11, int value12, int value21, int value22)
{
	int res1, res2;
	res1 = value11 * value21;
	res2 = value12 * value22;
	printf("%d/%d\n", res1, res2);	
}

/*************************************************
	Function: 		Divid
	Description: 	������
	Calls: 			scanf	printf
	Called By:		OutputCal
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void Divid(int value11, int value12, int value21, int value22)
{
	int res1, res2;
	res1 = value11 * value22;
	res2 = value12 * value21;
	printf("%d/%d\n", res1, res2);	
}

