/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：绘制余弦曲线
 *		要点：函数，流程控制，math库调用，需要注意这题的解题思路重点。
 * 		重点：程序输出都是按行输出的，因此函数肯定是外在的大循环，所以这边行数事实
 *		是从-1~1进行切割成多份的。而每行对应的位置就需要反三角函数来计算了，注意
 *		一个行对应两个点，acos等只计算第一个点，第二个点推导方法根据具体函数分析。
 *
 ********************************************************************************/

 
#include <stdio.h>
#include <math.h>


#define PI 3.14

void PrintCos(char f_sym, int f_x);
void PrintSin(char f_sym, int f_x);


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
	char sym;
	int x;
	printf("input the symbol:\n");
	scanf("%c %d", &sym, &x);
	PrintCos(sym, x);
	printf("\n");
	PrintSin(sym, x);
}


/*************************************************
	Function: 		PrintCos
	Description: 	cos函数打印
	Calls: 			printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void PrintCos(char f_sym, int f_x)
{
	float i;
	int	j;
	int a, b;
	
	//for中大循环达标行数以及三角函数最大最小值关系
	for (i = 1.0; i > -1.0; i -= 0.1)
	{
		a = (int)(acos(i) * f_x);
		
		//特别注意这边是2倍的a，1倍的a是对应的坐标，
		//但因为在一行前面已经空出了位置
		b = (int)(2 * PI * f_x) - a * 2;	
		
		for (j = 0; j < a; j++)
			printf(" ");
		printf("%c", f_sym);
		for (j = 0; j < b; j++)
			printf(" ");
		printf("%c", f_sym);	
		printf("\n");
	}
}


/*************************************************
	Function: 		PrintCos
	Description: 	cos函数打印
	Calls: 			printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void PrintSin(char f_sym, int f_x)
{
	float i;
	int	j;
	int a, b;
	

	//正弦函数疯传两段分别处理
	for (i = 1.0; i > 0; i -= 0.1)
	{
		a = (int)(asin(i) * f_x);
		b = (int)(PI * f_x) - a * 2;
		for (j = 0; j < a; j++)
			printf(" ");
		printf("%c", f_sym);
		for (j = 0; j < b; j++)
			printf(" ");
		printf("%c", f_sym);		
		printf("\n");
	}
	for (i = 0; i > -1; i -= 0.1)
	{
		a = (int)((PI - asin(i)) * f_x);
		b = (int)(3 * PI * f_x) - a * 2;
		// for (j = 0; j < int(PI * f_x); j++)
			// printf(" ");
		for (j = 0; j < a; j++)
			printf(" ");
		printf("%c", f_sym);
		for (j = 0; j < b; j++)
			printf(" ");
		printf("%c", f_sym);	
		printf("\n");
	}
	
}
