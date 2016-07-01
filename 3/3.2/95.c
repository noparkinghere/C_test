/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��������в���ڵ㣬��93.cһ���Ĺ����Լ���������
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
void OutList(pstruNode head);
void InsertList(pstruNode head, int pos, int num);
void DelList(pstruNode head, int pos, int num);


int main(void)
{
	pstruNode head;
	int num;
	int pos;
	printf("input the numbers:");
	scanf("%d", &num);
	head = CreatList(num);
	OutList(head);
	printf("delete the position:");
	scanf("%d", &pos);	//����λ��
	printf("the result:\n");
	DelList(head, pos, num);
	OutList(head);
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
	p->next = NULL;		//ȷ��Ϊ���򲻿�ѭ������
	return head;
}

/*************************************************
	Function: 		InsertList
	Description: 	����Ԫ��
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void InsertList(pstruNode head, int pos, int num)
{
	int i;
	pstruNode p, q;
	p = head;
	
	//��һ�����Ƴ����������㳬���˷�Χ����ĩβ��ӡ�
	if (pos > num)
		pos = num + 1;
	
	for (i = 0; i < pos - 1; i++)
	{
		p = p->next;
	}
	q = MALLOC(struNode, 1);
	q->next = p->next;
	p->next = q;
	scanf("%s", q->name);
}

/*************************************************
	Function: 		DelList
	Description: 	ɾ��ĳһ���ڵ�
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void DelList(pstruNode head, int pos, int num)
{
	pstruNode p, q;
	int i;
	p = head;
	if (pos <= num)
	{
		for (i = 0; i < pos - 1; i++)
		{
			p = p->next;
		}
		q = p->next;
		p->next = q->next;
		free(q);
		q = NULL;		
	}
	else
	{
		printf("error del!\n");
		exit(1);
	}

}


/*************************************************
	Function: 		OutList
	Description: 	�������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void OutList(pstruNode head)
{
	int i;
	pstruNode p = head;
	for (i = 0; p->next != NULL; i++)
	{
		p = p->next;
		printf("%s\t", p->name);
	}
	printf("\n");
}


