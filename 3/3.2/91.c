/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：双链表逆序输出
 *		要点：链表的初步应用和了解
 *		
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
	Node * prior;
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
	OutList(head, num);
}

/*************************************************
	Function: 		CreatList
	Description: 	创建双向循环链表
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
	head->prior = NULL;
	
	for (i = 0; i < num; i++)
	{
		q = MALLOC(struNode, 1);
		scanf("%s", q->name);
		p->next = q;
		q->prior = p;
		p = q;
	}
	p->next = NULL;
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
void OutList(pstruNode head, int num)
{
	int i;
	pstruNode p = head;
	for (i = 0; i < num; i++)
	{
		p = p->next;
		printf("%s\t", p->name);
	}
	printf("\n");
	
	//反向输出
	for (i = 0; i < num; i++)
	{
		printf("%s\t", p->name);	
		p = p->prior;	
	}
	printf("\n");
}


