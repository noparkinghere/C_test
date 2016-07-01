/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�ʹ�÷���ָ��ĺ����������ֵ
 *		Ҫ�㣺ע�⺯��ָ���ָ�뺯��������
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>

#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))


void InitArr(int num, int *pValue);
// void OutArr(int num, int *pValue);
int *Max(int num, int *pValue);


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
	int *pValue;
	int num;
	int *res;
	printf("the numbers is :\n");
	scanf("%d", &num);
	pValue = MALLOC(int, num);
	InitArr(num, pValue);
	res = Max(num, pValue);
	printf("max:%d\n", *res);
	free(pValue);
	pValue = NULL;
}

/*************************************************
	Function: 		Max
	Description: 	�������ֵ��ָ��
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int *Max(int num, int *pValue)
{
	int i;
	int tmp = 0;
	for (i = 0; i < num; i++)
	{
		if (pValue[tmp] < pValue[i])
			tmp = i;
	}
	return (pValue + tmp);
}

/*************************************************
	Function: 		InitArr
	Description: 	��ʼ������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void InitArr(int num, int *pValue)
{
	int i;
	for (i = 0; i < num; i++)
	{
		scanf("%d", &pValue[i]);
	}
}

// void OutArr(int num, int *pValue)
// {
	// int i;
	// for (i = 0; i < num; i++)
	// {
		// printf("%d\t", pValue[i]);
	// }
	// printf("\n");
// }
