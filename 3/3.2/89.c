/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：循环链表
 *		要点：链表的初步应用和了解
 *		注意：main函数中只用到了创建链表和输出功能，其他函数从其他c文件中直接移植过来的，不被使用。
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))




typedef struct Node
{
	char name[20];
	Node * prior;
	Node * next;
}struNode, *pstruNode;

pstruNode CreatList(int num);
bool IsMatch(char *p1, char *p2);
void DelList(pstruNode head);
void OutList(pstruNode head, int num);


int main(void)
{
	pstruNode head;
	int num;
	printf("input the numbers:");
	scanf("%d", &num);

	head = CreatList(num);
	// OutList(head);
	// DelList(head);
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
	head->next = NULL;
	head->prior = NULL;
	p = head;
	
	//函数在原有基础上进行了必要的精简
	for (i = 0; i < num; i++)
	{
		q = MALLOC(struNode, 1);
		scanf("%s", q->name);
		p->next = q;
		q->prior = p;	//构建双向链表
		p = q;		
	}
	
	//构建双向循环
	p->next = head;
	head->prior = p;
	
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
	// pstruNode p = head->next;
	// while (p != NULL)
	// {
		// printf("%s\t", p->name);
		// p = p->next;
	// }
	int i;
	pstruNode p = head;
	for (i = 0; i < num; i++)
	{
		p = p->next;
		printf("%s\t", p->name);
	}
	
	p = head;
	for (i = 0; i < num; i++)
	{
		p = p->prior;
		printf("%s\t", p->name);
	}	
	
}


/*************************************************
	Function: 		DelList
	Description: 	删除链表中某数据
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void DelList(pstruNode head)
{
	char tmp[20];
	pstruNode trash;	//用于指向需要释放的变量。
	pstruNode p = head->next;
	printf("input the value needed to remove:");
	scanf("%s", tmp);

	while (p != NULL)
	{
		//删除节点
		if (IsMatch(tmp, p->name))
		{
			//尤其注意需要考虑特殊情况，否则程序会报错。
			if (p->next == NULL)
			{
				p->prior->next = NULL;
				free(p);
				trash = NULL;			
			}
			else 
			{
				trash = p;
				p->prior->next = p->next;
				p->next->prior = p->prior;
				p = p->next;
				free(trash);
				trash = NULL;				
			}
		}
		else 
			p = p->next;	
	}
}

/*************************************************
	Function: 		IsMatch
	Description: 	判断字符串是否匹配
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsMatch(char *p1, char *p2)
{
	int i;
	for (i = 0; p1[i] != '\0' || p2[i] != '\0'; i++)
	{
		if (p1[i] != p2[i])
			return false;
	}
	return true;
}
