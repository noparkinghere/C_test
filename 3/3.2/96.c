/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��ϲ���������
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
void ConList(pstruNode head1, pstruNode head2);



int main(void)
{
	pstruNode head1, head2;
	int num1, num2;
	printf("input the number1:");
	scanf("%d", &num1);
	head1 = CreatList(num1);
	printf("input the number2:");
	scanf("%d", &num2);
	head2 = CreatList(num2);
	ConList(head1, head2);
	printf("the result is:\n");
	OutList(head1);
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
void ConList(pstruNode head1, pstruNode head2)
{
	pstruNode p = head1;
	do
	{
		p = p->next;
	}while(p->next != NULL);
	p->next = head2->next;
	free(head2);
	head2 = NULL;
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


