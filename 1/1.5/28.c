/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ͳ��ѡ��Ʊ��
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


void RecordVote(int num);


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
	int num;
	printf("input the vote number:\n");

	//����ͶƱ����
	scanf("%d", &num);
	printf("input the vote:\n");
	RecordVote(num);
}


/*************************************************
	Function: 		RecordVote
	Description: 	��̬�ڴ���䷽ʽ����¼ѡƱ
					��������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void RecordVote(int num)
{
	int *array = (int *)malloc(sizeof(int) * num);
	int i;
	int one = 0;
	int two = 0;
	int three = 0;
	for (i = 0; i < num; i++)
	{
		scanf("%d", &array[i]);
	}
	
	for (i = 0; i < num; i++)
	{
		if (1 == array[i])
		{
			one++;
		}
		else if (2 == array[i])
		{
			two++;
		}
		else if (3 == array[i])
		{
			three++;
		}
	}
	printf("one:\t%d\n", one);
	printf("two:\t%d\n", two);
	printf("three:\t%d\n", three);
	free(array);
	array = NULL;
}


