/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：约瑟夫环
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
void OutList(pstruNode head, int num);
void RevList(pstruNode head, int num);


int main(void)
{
	pstruNode head;
	int num;
	printf("input the numbers:");
	scanf("%d", &num);
	head = CreatList(num);
	
	scanf("%d", &num);	//每次剔除的数据
	OutList(head, num);
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
	p->next = head->next;
	return head;
}


/*************************************************
	Function: 		OutList
	Description: 	输出链表，满足约瑟夫环要求
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
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
	
	//剔除最后一个数据
	printf("%s\t", p->name);
	free(p);
	p = NULL;
	head->next = NULL;
}


