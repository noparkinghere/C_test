/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�������ݵ����⣬����ο���Ӧ����
 *		Ҫ�㣺��ѧ����
 * 
 ********************************************************************************/

 
#include <stdio.h>


bool MatchData(int num);


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
	int num = 0;
	int i;
	
	//�����һ��������������ֵ
	do
	{
		num++;
	} while (false == MatchData(num));
	printf("the min number is %d\n", num);
	
	//���0-1000��Χ�ڵ�����������������ֵ
	printf("the number list is:\n", num);
	for (i = 0; i < 1000; i++)
	{
		if (true == MatchData(i))
			printf("%d\t", i);
	}
	printf("\n");
}


/*************************************************
	Function: 		MatchData
	Description: 	�ж�����
	Calls: 				
	Called By:		main
	Input: 			��
	Output: 		
	Return: 		true	false
*************************************************/
bool MatchData(int num)
{
	if (1 == num % 2 && 2 == num % 3 && 4 == num % 5 \
			&& 5 == num % 6 && 0 == num % 7)
		return true;
	else 
		return false;
}


