/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ����ѧ��ƽ�����
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>


float AveHei(int num);



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
	float ave;
	printf("input the students number:\n");
	scanf("%d", &num);
	ave = AveHei(num);
	printf("the average height:%.2f\n", ave);
}


float AveHei(int num)
{
	int i;
	int tmp;
	int res = 0;
	printf("input the student's height:\n");
	for (i = 0; i < num; i++)
	{
		scanf("%d", &tmp);
		res += tmp;
	}
	return (res / (float)num);
}


