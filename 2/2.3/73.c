/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�Ѱ�ҵ�һ����ͬԪ��
 *		Ҫ�㣺
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))
#define LEN	10



int * DelArr(int *p);
int * InitArr(int len);
int Search(int len, int *One, int *Two);



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
	int *One, *Two, res;
	//��߿����ʵ�����LEN��ֵ������ͨ���û�����
	printf("the first is :\n");
	One = InitArr(LEN);	
	printf("the second is :\n");
	Two = InitArr(LEN);
	res = Search(LEN, One, Two);
	printf("the same element is :%d\n", res);
	One = DelArr(One);
	Two = DelArr(Two);
}

/*************************************************
	Function: 		InitArr
	Description: 	��ʼ������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int * InitArr(int len)
{
	int i;
	int *arr = MALLOC(int, len);
	for (i = 0; i < len; i++)
	{
		scanf("%d", arr + i);
	}
	return arr;
}

/*************************************************
	Function: 		DelArr
	Description: 	����ѿռ�
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int * DelArr(int *p)
{
	free(p);
	return NULL;
}

/*************************************************
	Function: 		Search
	Description: 	��������ͬ�ĵ�һ��Ԫ�ط���
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int Search(int len, int *One, int *Two)
{
	int i, j;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (One[i] == Two[j])
				return One[i];
		}
	}
}


