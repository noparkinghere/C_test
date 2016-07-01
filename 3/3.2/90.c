/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：双链表逆置
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
	RevList(head, num);
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
	
	for (i = 0; i < num; i++)
	{
		q = MALLOC(struNode, 1);
		scanf("%s", q->name);
		p->next = q;
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
}

/*************************************************
	Function: 		RevList
	Description: 	链表倒置，让head始终指向头部，
					可以少定义一个变量，注意是
					head->next而不是head，head和
					pq的区别在于head是个节点，而pq
					仅仅是个指针变量。
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void RevList(pstruNode head, int num)
{
	pstruNode p, q;
	p = q = head;
	
	if (num >= 3)
	{
		p = head->next;
		q = head->next->next;
		head->next = head->next->next->next;
		p->next = NULL;		//让第一个next断裂开
		while (head->next != NULL)
		{
			q->next = p;
			p = q;
			q = head->next;
			head->next = head->next->next;

		}
		q->next = p;	//最后一个节点
		head->next = q;		
	}
	else if (num == 2)	//链表长度为2的时候，链表长度为1不需要做任何更改
	{
		p = head->next;
		q = head->next->next;
		q->next = p;
		p->next = NULL;
		head->next = q;
	}

}

