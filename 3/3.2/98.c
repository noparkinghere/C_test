/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ͷ���뷨����������
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



int main(void)
{
	pstruNode head;
	int num;
	printf("input the number:");
	scanf("%d", &num);
	head = CreatList(num);
	OutList(head);
}

/*************************************************
	Function: 		CreatList
	Description: 	ͷ���뷨������������ֻ�Ǻ�
					��ͨ�ĺ���������в�ͬ
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
	p = MALLOC(struNode, 1);
	q = p;
	scanf("%s", q->name);
	p->next = NULL;


	for (i = 0; i < num - 1; i++)
	{
		q = MALLOC(struNode, 1);
		scanf("%s", q->name);
		head->next = q;
		q->next = p;
		p = q;
	}
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
	int i;
	pstruNode p = head;
	for (i = 0; p->next != NULL; i++)
	{
		p = p->next;
		printf("%s\t", p->name);
	}
	printf("\n");
}


