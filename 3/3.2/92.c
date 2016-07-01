/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�Լɪ��
 *		Ҫ�㣺����ĳ���Ӧ�ú��˽�
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))




typedef struct Node
{
	char name[20];
	Node * next;
}struNode, *pstruNode;

pstruNode CreatList(int num);
void OutList(pstruNode head, int num);
void RevList(pstruNode head, int num);


int main(void)
{
	pstruNode head;
	int num;
	printf("input the numbers:");
	scanf("%d", &num);
	head = CreatList(num);
	
	scanf("%d", &num);	//ÿ���޳�������
	OutList(head, num);
}

/*************************************************
	Function: 		CreatList
	Description: 	��������ѭ������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
pstruNode CreatList(int num)
{
	pstruNode head, p, q;
	int i;
	head = MALLOC(struNode, 1);
	p = head;
	head->next = NULL;
	
	for (i = 0; i < num; i++)
	{
		q = MALLOC(struNode, 1);
		scanf("%s", q->name);
		p->next = q;
		p = q;
	}
	p->next = head->next;
	return head;
}


/*************************************************
	Function: 		OutList
	Description: 	�����������Լɪ��Ҫ��
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void OutList(pstruNode head, int num)
{
	pstruNode p, q;	
	int i;
	p = head->next;
	while (p->next != p)
	{
		for (i = 0; i < num - 2; i++)
		{
			p = p->next;
		}
		q = p->next;
		printf("%s\t", q->name);
		p->next = q->next;
		p = p->next;
		free(q);
		q = NULL;
	}
	
	//�޳����һ������
	printf("%s\t", p->name);
	free(p);
	p = NULL;
	head->next = NULL;
}


