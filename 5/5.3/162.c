/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ����Ǻ�������
 *		Ҫ�㣺��ѧ�������
 *		
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define PI 3.14159265


int fun(double num);



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
	int num;	//����ֵΪ��������ֵ
	scanf("%d", &num);
	fun(num/360.0*2*PI);
}

/************************************************
	Function: 		fun
	Description: 	���Ǻ����ļ���
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int fun(double num)
{
	printf("%lf\n", sin(num));
	printf("%lf\n", cos(num));
	printf("%lf\n", tan(num));
}



