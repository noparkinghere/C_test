/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ������Ƿ�������:�ܹ���4�������ܱ�100�����������ܹ���400������Ϊ����
 *		Ҫ�㣺�ж���䣬���̿��ƣ�ͨ�ú���
 * 
 ********************************************************************************/

 
#include <stdio.h>

bool LeapYear(int f_year);
void LeapYearLoop(void);


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
	int year;
	while(1)
	{
		printf("input the year:\n");
		scanf("%d", &year);
		// printf("%d, %d", true, false);

		if (LeapYear(year))
			printf("this is a leap year\n");
		else
			printf("this is not a leap year\n");	
	}
	// LeapYearLoop();
}

bool LeapYear(int f_year)
{
	if (0 == f_year % 4 && 0 != f_year % 100 || 0 == f_year % 400)
		return true;
	else 
		return false;
}

void LeapYearLoop(void)
{
	int i;
	for (i = 0; i < 20000; i++)
	{
		if (0 == i % 4 && 0 == i % 100 && 0 != i % 400)
			printf("%d\t", i);

	}
}




