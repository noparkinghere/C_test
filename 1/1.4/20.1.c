/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：输入三个数值，输出是否能组成三角形，若可以则输出三角形的类型
 *		要点：流程控制语句，函数的使用
 * 		重点：将功能合理的分装成函数来调用
 *
 ********************************************************************************/

 
#include <stdio.h>
#include <math.h>

void SortThree(int *a, int *b, int *c);
void Swap(int *a, int *b);
double TriagArea(int a, int b, int c);
int JudgeTriag(int a, int b, int c);


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
	int a, b, c;
	double area;
	int sign;
	printf("input the three numbers sperating them with blankspace:\n");
	scanf("%d %d %d", &a, &b, &c);
	SortThree(&a, &b, &c);
//	printf("%d %d %d", a, b, c);

	//判定三个数据能够构成三角形
	if (a + b > c)
	{
		printf("a triangle can consist of the three numbers\n");
		area = TriagArea(a, b, c);
		printf("the triangle's area is %lf\n", area);
		sign = JudgeTriag(a, b, c);
		if (0 == sign)
			printf("this is regular triangel\n");
		if (1 == sign)
			printf("this is acute triangel\n");
		if (2 == sign)
			printf("this is right triangel\n");
		if (3 == sign)
			printf("this is obtuse triangel\n");
	}
	else 
		printf("a triangle can not consist of the three numbers\n");

}

/*************************************************
	Function: 		SortThree
	Description: 	将三个数从小到大排序
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		
*************************************************/
void SortThree(int *a, int *b, int *c)
{
	if (*a > *b)
		Swap(a, b);
	if (*b > *c)
		Swap(b, c);
	if (*a > *b)
		Swap(a, b);
}

/*************************************************
	Function: 		Swap
	Description: 	交换两个数据
	Calls: 			
	Called By:		SortThree
	Input: 			无
	Output: 		无
	Return: 		
*************************************************/
void Swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}


/*************************************************
	Function: 		TriagArea
	Description: 	计算三角形面积
	Calls: 			
	Called By:		mian
	Input: 			无
	Output: 		无
	Return: 		area
*************************************************/
double TriagArea(int a, int b, int c)
{
	double p = (a + b + c) / 2.0;
	double area;
	area = sqrt(p * (p -a) * (p - b) * (p - c));
	return area;
}


/*************************************************
	Function: 		JudgeTriag
	Description: 	判断三角形的类型
	Calls: 			
	Called By:		mian
	Input: 			无
	Output: 		无
	Return: 		返回相应的判定值
*************************************************/
int JudgeTriag(int a, int b, int c)
{
	if (a * a + b * b == c * c)
	{
		return 2;			//直角
	}
	else if (a * a + b * b >= c * c)
	{
		if (a == b && b == c)
			return 0;		//正三角
		return 1;			//锐角
	}
	else 
		return 3;			//钝角
}

