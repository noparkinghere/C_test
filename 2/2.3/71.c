/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�ʹ��ָ�뺯����ѧ���ɼ�
 *		Ҫ�㣺
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
	Description: 	������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
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
	Description: 	��ʼ������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
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
	Description: 	���ָ������ֵ
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
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
	Description: 	�ͷŶ��ڴ�
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
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


