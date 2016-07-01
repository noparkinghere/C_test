/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��ú궨��ʵ�ֻ���
 *		Ҫ�㣺�궨��ʹ�ã��꺯����˼��
 * 		�ص㣺һ�㲻���ں궨����ʹ�ø��ӵĲ�����������ײ��̵Ļ�Ҳ��ʹ��
 *
 ********************************************************************************/

 
#include <stdio.h>

#define LEN 5
//����ע��궨��ʱ ��б�ܻ��з��Ǳ���ģ�
// #define SWAP(a,b)	{int c;		\
						// c=a;	\
						// a=b;	\
						// b=c;}						
#define SWAP(a,b)	{a = a + b;	\
					b = a - b;	\
					a = a - b;}

						
void OutArr(int *arr, int len);
void InitArr(int *arr, int len);

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
	int i;
	int a[LEN], b[LEN];
	printf("input the array a:\n");
	InitArr(a, LEN);
	printf("input the array b:\n");
	InitArr(b, LEN);
	for (i = 0; i < LEN; i++)
	{
		SWAP(a[i], b[i]);
	}
	OutArr(a, LEN);
	OutArr(b, LEN);
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
void InitArr(int *arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		scanf("%d", arr + i);
	}
}

/*************************************************
	Function: 		InitArr
	Description: 	��ӡ�����������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void OutArr(int *arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d\t", arr[i]);
	}	
	printf("\n");
}

