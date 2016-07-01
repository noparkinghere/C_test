/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：输出学生平均身高
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>


float AveHei(int num);



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


