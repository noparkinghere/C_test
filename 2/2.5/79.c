/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ������ºţ����Ӣ��
 *		Ҫ�㣺
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>



#define LEN	12


char *Month[LEN] = {"January", "February", "March", "April", "May", \
					"June", "July", "August", "September", "october", \
					"November", "December"};


					
void OutMonth(int num);


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
	printf("input the number of the month:\n");	
	scanf(" %d", &num);
	OutMonth(num);
}

/*************************************************
	Function: 		OutMonth
	Description: 	�����
	Calls: 			
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void OutMonth(int num)
{
	printf("%s\n", Month[num - 1]);
}

