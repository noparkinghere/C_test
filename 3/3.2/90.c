/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�˫��������
 *		Ҫ�㣺����ĳ���Ӧ�ú��˽�
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
	Description: 	�������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
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
	Description: 	�����ã���headʼ��ָ��ͷ����
					�����ٶ���һ��������ע����
					head->next������head��head��
					pq����������head�Ǹ��ڵ㣬��pq
					�����Ǹ�ָ�������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
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
		p->next = NULL;		//�õ�һ��next���ѿ�
		while (head->next != NULL)
		{
			q->next = p;
			p = q;
			q = head->next;
			head->next = head->next->next;

		}
		q->next = p;	//���һ���ڵ�
		head->next = q;		
	}
	else if (num == 2)	//������Ϊ2��ʱ��������Ϊ1����Ҫ���κθ���
	{
		p = head->next;
		q = head->next->next;
		q->next = p;
		p->next = NULL;
		head->next = q;
	}

}

