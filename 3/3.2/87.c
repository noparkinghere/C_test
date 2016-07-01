/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�������������
 *		Ҫ�㣺����ĳ���Ӧ�ú��˽�
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))


void Time(FILE *fp);


typedef struct Node
{
	int data;
	Node * next;
}struNode, *pstruNode;

void OutList(pstruNode head);
pstruNode CreatList(void);


int main(void)
{
	pstruNode head;
	head = CreatList();
	OutList(head);
}

/*************************************************
	Function: 		CreatList
	Description: 	��������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
pstruNode CreatList(void)
{
	int num, tmp, i;
	pstruNode head = MALLOC(struNode, 1);
	pstruNode pNode1 = MALLOC(struNode, 1);
	pstruNode pNode2 = MALLOC(struNode, 1);
	printf("���������ȣ�");
	scanf("%d", &num);
	
	if (num == 0)
	{
		head->next = NULL;
		exit(1);
	}
	
	head->next = pNode1;		//ͷָ��ʹ��
	if (num == 1)
	{
		scanf("%d", &tmp);
		pNode1->data = tmp;
		pNode1->next = NULL;
		return head;
	}
	
	pNode1->next = pNode2;
	scanf("%d", &tmp);
	pNode1->data = tmp;		
	scanf("%d", &tmp);
	pNode2->data = tmp;
	
	for (i = 2; i < num; i++)
	{
		pNode1 = pNode2;
		pNode2 = MALLOC(struNode, 1);
		pNode1->next = pNode2;
		scanf("%d", &tmp);
		pNode2->data = tmp;
	}
	pNode2->next = NULL;
	return head;
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
	pstruNode p = head->next;
	while(p != NULL)
	{
		printf("%d\t", p->data);
		p = p->next;
	}
}


