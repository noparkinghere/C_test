/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：使用指针函数求学生成绩
 *		要点：
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))
#define LEN	4


void OutStuArr(int num, int len, int a, float **StuArr);
float **InitStuArr(int num, int len);
float **DelStu(int num, float **StuArr);



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
	int num, a;
	float **StuArr;
	printf("input the number of the students:\n");
	scanf("%d", &num);
	StuArr = InitStuArr(num, LEN);
	printf("input the student's number:\n");
	scanf("%d", &a);
	OutStuArr(num, LEN, a, StuArr);
	StuArr = DelStu(num, StuArr);
}

/*************************************************
	Function: 		InitStuArr
	Description: 	初始化数组
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
float **InitStuArr(int num, int len)
{
	int i, j;
	float **p = MALLOC(float *, num);
	for (i = 0; i < num; i++)
	{
		p[i] = MALLOC(float, len);
		printf("input the values:\n");
		for (j = 0; j < len; j++)
		{
			scanf("%f", &p[i][j]);
		}
		printf("\n");

	}
	return p;
}

/*************************************************
	Function: 		OutStuArr
	Description: 	输出指定的数值
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void OutStuArr(int num, int len, int a, float **StuArr)
{
	int i;
	if (a >= num)
		printf("error input\n");
	else
	{
		for (i = 0; i < len; i++)
		{
			printf("%f\t", StuArr[a - 1][i]);
		}
		printf("\n");
	}
}

/*************************************************
	Function: 		DelStu
	Description: 	释放堆内存
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
float **DelStu(int num, float **StuArr)
{
	int i;
	for (i = 0; i < num; i++)
	{
		free(StuArr[i]);
	}
	free(StuArr);
	return NULL;
}


