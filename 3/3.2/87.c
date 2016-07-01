/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：创建单向链表
 *		要点：链表的初步应用和了解
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
	Description: 	创建链表
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
pstruNode CreatList(void)
{
	int num, tmp, i;
	pstruNode head = MALLOC(struNode, 1);
	pstruNode pNode1 = MALLOC(struNode, 1);
	pstruNode pNode2 = MALLOC(struNode, 1);
	printf("输入链表长度：");
	scanf("%d", &num);
	
	if (num == 0)
	{
		head->next = NULL;
		exit(1);
	}
	
	head->next = pNode1;		//头指针使用
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
	Description: 	输出链表
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
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


