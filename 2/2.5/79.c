/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：输入月号，输出英文
 *		要点：
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
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
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
	Description: 	输出月
	Calls: 			
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void OutMonth(int num)
{
	printf("%s\n", Month[num - 1]);
}

