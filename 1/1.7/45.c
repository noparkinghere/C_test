/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：分数计算器程序
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
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
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int main(void)
{
	int value11, value12, value21, value22;
	char sign;
	while(1)
	{
		//输入格式如：1/2 + 1/3   +前后有空格
		scanf("%d/%d %c %d/%d", &value11, &value12, &sign, &value21, &value22);
		OutputCal(value11, value12, value21, value22, sign);	
	}
}


/*************************************************
	Function: 		OutputCal
	Description: 	输出结果
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	输出结果
	Calls: 			scanf	printf
	Called By:		OutputCal
	Input: 			无
	Output: 		无
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
	Description: 	输出结果
	Calls: 			scanf	printf
	Called By:		OutputCal
	Input: 			无
	Output: 		无
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
	Description: 	输出结果
	Calls: 			scanf	printf
	Called By:		OutputCal
	Input: 			无
	Output: 		无
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
	Description: 	输出结果
	Calls: 			scanf	printf
	Called By:		OutputCal
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void Divid(int value11, int value12, int value21, int value22)
{
	int res1, res2;
	res1 = value11 * value22;
	res2 = value12 * value21;
	printf("%d/%d\n", res1, res2);	
}

