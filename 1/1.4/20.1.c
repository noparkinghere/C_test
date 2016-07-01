/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����������ֵ������Ƿ�����������Σ�����������������ε�����
 *		Ҫ�㣺���̿�����䣬������ʹ��
 * 		�ص㣺�����ܺ���ķ�װ�ɺ���������
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
	Description: 	������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
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

	//�ж����������ܹ�����������
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
	Description: 	����������С��������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
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
	Description: 	������������
	Calls: 			
	Called By:		SortThree
	Input: 			��
	Output: 		��
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
	Description: 	�������������
	Calls: 			
	Called By:		mian
	Input: 			��
	Output: 		��
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
	Description: 	�ж������ε�����
	Calls: 			
	Called By:		mian
	Input: 			��
	Output: 		��
	Return: 		������Ӧ���ж�ֵ
*************************************************/
int JudgeTriag(int a, int b, int c)
{
	if (a * a + b * b == c * c)
	{
		return 2;			//ֱ��
	}
	else if (a * a + b * b >= c * c)
	{
		if (a == b && b == c)
			return 0;		//������
		return 1;			//���
	}
	else 
		return 3;			//�۽�
}

