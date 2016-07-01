/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����ɹ������
 *		Ҫ�㣺�����е���ѧ����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define START		2000
#define DAY			365
#define MAX			31
#define MIN			30
#define MIC			28


enum EMMonths
{
	Jan=1,	Feb, Mar, Apr, May, June,
	July, Aug, Sep, Oct, Nov, Dec,
};


int SumMon(int month, int num);
bool Judge(int num);
bool IsLeapYear(int year);


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
	int i;
	int iSumDay = 0;			//ͳ��������
	int year = START;
	EMMonths month;
	int day = 0;
	int flag = 0;
	printf("input the date:\n");
	scanf("%d%d%d", &year, &month, &day);
	for (i = START; i < year; i++)
	{
		iSumDay += (IsLeapYear(i) ? DAY+1 : DAY); 
	}
	flag = (IsLeapYear(i) ? 1 : 0);
	iSumDay += SumMon(month, flag);
	
	iSumDay += day;
	
	if (Judge(iSumDay))
	{
		printf("fishing!\n");
	}
	else
	{
		printf("basking!\n");
	}

}

/*************************************************
	Function: 		SumMon
	Description: 	�·��ۼ����
	Calls: 				
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int SumMon(int month, int num)
{
	int res = 0;
	int i;
	int arrMonth[12] = {31, 28+num, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for (i = 1; i < month; i++)
	{
		res += arrMonth[i];
	}
	return res;
}


/*************************************************
	Function: 		Judge
	Description: 	�жϴ��㻹��ɹ��
	Calls: 				
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool Judge(int num)
{
	if (num%5 == 1 || num%5 == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}


/*************************************************
	Function: 		IsLeapYear
	Description: 	�ж�ƽ�껹������
	Calls: 				
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsLeapYear(int year)
{
	if (year%400 == 0 || (year%4 == 0 && year%100 != 0))
		return true;
	else
		return false;
}

