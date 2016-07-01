/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����˫������
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
	Node * prior;
	Node * next;
}struNode, *pstruNode;

pstruNode CreatList(void);
bool IsMatch(char *p1, char *p2);
void DelList(pstruNode head);
void OutList(pstruNode head);

int main(void)
{
	pstruNode head;
	head = CreatList();
//	OutList(head);
	DelList(head);
	OutList(head);
}

/*************************************************
	Function: 		CreatList
	Description: 	����˫������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
pstruNode CreatList(void)
{
	int num, i;
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
	pNode1->prior = head;
	if (num == 1)
	{
		scanf("%s", pNode1->name);
		pNode1->prior = head;
		pNode1->next = NULL;
		return head;
	}
	
	//���ɵڶ����ڵ�����
	pNode1->next = pNode2;
	pNode2->prior = pNode1;
	scanf("%s", pNode1->name);
	scanf("%s", pNode2->name);

	for (i = 2; i < num; i++)
	{
		pNode1 = pNode2;
		pNode2 = MALLOC(struNode, 1);
		pNode1->next = pNode2;
		pNode2->prior = pNode1;
		scanf("%s", pNode2->name);

	}
	pNode2->next = NULL;
	return head;
}

/*************************************************
	Function: 		DelList
	Description: 	ɾ��������ĳ����
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void DelList(pstruNode head)
{
	char tmp[20];
	pstruNode trash;	//����ָ����Ҫ�ͷŵı�����
	pstruNode p = head->next;
	printf("input the value needed to remove:");
	scanf("%s", tmp);

	while (p != NULL)
	{
		//ɾ���ڵ�
		if (IsMatch(tmp, p->name))
		{
			//����ע����Ҫ��������������������ᱨ��
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
	// pstruNode p = head->next;
	// while (p != NULL)
	// {
		// printf("%s\t", p->name);
		// p = p->next;
	// }
	
	pstruNode p = head;
	while (p->next != NULL)
	{
		p = p->next;
		printf("%s\t", p->name);
	}
}

/*************************************************
	Function: 		IsMatch
	Description: 	�ж��ַ����Ƿ�ƥ��
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
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
