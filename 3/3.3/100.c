/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ջ��������
 *		Ҫ�㣺����ĳ���Ӧ�ú��˽�
 *		ע�⣺������ֻ��ת��10�������µ��飬û�ж�16���Ƶ�����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))


typedef struct Node
{
	char num;
	Node * next;
	Node * prior;
}struStack, *pstruStack;
typedef pstruStack * ppstruStack;

pstruStack InitStack(void);
pstruStack CreatStack(void);
char PopStack(ppstruStack top);
void PushStack(ppstruStack top, char num);
bool IsMatch(ppstruStack StackTop, char *passwd);
int stringlen(char *str);


/*************************************************
	Function: 		main
	Description: 	������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int main(void)
{
	char passwd[20];
	pstruStack StackTop;
	printf("set the password:\n");
	scanf("%s", passwd);
	getchar();	
	
	//�ж�ƥ��
	printf("input the password:\n");	
	StackTop = InitStack();
	if (IsMatch(&StackTop, passwd))
	{
		printf("password right!\n");
	}
	else
	{
		printf("wrong password, input again:\n");
		StackTop = InitStack();
		if (IsMatch(&StackTop, passwd))
		{
			printf("password right!\n");
		}
		else
		{
			printf("wrong password, input again:\n");
			StackTop = InitStack();
			if (IsMatch(&StackTop, passwd))
			{
				printf("password right!\n");
			}
			else 
			{
				printf("wrong password, input again:\n");
				exit(1);
			}
		}
	}
}

/*************************************************
	Function: 		Convert
	Description: 	����ת������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
pstruStack InitStack(void)
{
	int i;
	pstruStack top = MALLOC(struStack, 1);
	char tmp;
	for (i = 0; (tmp = getchar()) != '\n'; i++)
	{		
		PushStack(&top, tmp);
	}
	return top;
}


/*************************************************
	Function: 		PushStack
	Description: 	ѹջѹ�����ݲ���
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void PushStack(ppstruStack top, char num)
{
	pstruStack p;
	p = MALLOC(struStack, 1);
	p->num = num;
	p->next = *top;
	(*top)->prior = p;
	*top = p;
}

/*************************************************
	Function: 		PopStack
	Description: 	��ջ�����������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
char PopStack(ppstruStack top)
{
	char res;
	pstruStack p = *top;
	res = (*top)->num;
	*top = (*top)->next;
	free(p);
	p = NULL;
	return res;
}

bool IsMatch(ppstruStack StackTop, char *passwd)
{
	int i;
	char tmp;
	for (i = stringlen(passwd); i > 0; i--)
	{
		if ((tmp = PopStack(StackTop)) != passwd[i - 1])
		{
			return false;
		}
	}
}

/*************************************************
	Function: 		stringlen
	Description: 	�����ַ�������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int stringlen(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}
