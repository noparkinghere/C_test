/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：链表转置
 *		要点：链表的初步应用和了解
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
pstruNode RevList(pstruNode head);



int main(void)
{
	pstruNode head;
	int num;
	printf("input the number:");
	scanf("%d", &num);
	head = CreatList(num);
	OutList(head);
	head = RevList(head);
	printf("the result is:\n");
	OutList(head);
}

/*************************************************
	Function: 		CreatList
	Description: 	创建单向循环链表
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
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
	p->next = NULL;		//确定为单向不可循环链表
	return head;
}

/*************************************************
	Function: 		InsertList
	Description: 	插入元素
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
pstruNode RevList(pstruNode head)
{
	pstruNode p, q;
	p = head->next;
	head->next = p->next;
	if (head->next != NULL)
		q = head->next->next;
	else
	{
		printf("error reverse\n");
		exit(1);
	}
	p->next = NULL;	
	while (q != NULL)
	{
		head->next->next = p;
		p = head->next;
		head->next = q;
		q = q->next;
	}
	//处理最后一个节点
	head->next->next = p;
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
	int i;
	pstruNode p = head;
	for (i = 0; p->next != NULL; i++)
	{
		p = p->next;
		printf("%s\t", p->name);
	}
	printf("\n");
}


