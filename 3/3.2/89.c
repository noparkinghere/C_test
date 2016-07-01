/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ѭ������
 *		Ҫ�㣺����ĳ���Ӧ�ú��˽�
 *		ע�⣺main������ֻ�õ��˴��������������ܣ���������������c�ļ���ֱ����ֲ�����ģ�����ʹ�á�
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
	Description: 	����˫��ѭ������
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
	head->next = NULL;
	head->prior = NULL;
	p = head;
	
	//������ԭ�л����Ͻ����˱�Ҫ�ľ���
	for (i = 0; i < num; i++)
	{
		q = MALLOC(struNode, 1);
		scanf("%s", q->name);
		p->next = q;
		q->prior = p;	//����˫������
		p = q;		
	}
	
	//����˫��ѭ��
	p->next = head;
	head->prior = p;
	
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
