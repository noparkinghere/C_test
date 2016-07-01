/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�Ӧ��ջʵ�ֽ���ת��
 *		Ҫ�㣺���ݽṹջ�ĳ���Ӧ�ú��˽�
 *		ע�⣺������ֻ��ת��10�������µ��飬û�ж�16���Ƶ�����
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))


typedef struct Node
{
	int num;
	Node * next;
	Node * prior;
}struStack, *pstruStack;
typedef pstruStack * ppstruStack;

int Convert(int input, int mode);
pstruStack CreatStack(void);
int PopStack(ppstruStack top);
void PushStack(ppstruStack top, int num);


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
	int input;
	int mode;
	int res;
	printf("input the number:\n");
	scanf("%d", &input);
	printf("to the num mode:\n");
	scanf("%d", &mode);
	res = Convert(input, mode);
	printf("the result is : %d\n", res);
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
int Convert(int input, int mode)
{
	int i;
	int tmp;
	long int res = 0;
	pstruStack top;
	top = CreatStack();
	for (i = 0; input != 0; i++)
	{
		tmp = input % mode;
		PushStack(&top, tmp);
		input /= mode;
		// printf("%d\n", tmp);
	}
	
	//����ջ�����ݣ�������ʮ���Ƶ���ʽ�����ʾ����
	for (; i > 0; i--)
	{
		res = res * 10 + PopStack(&top);
		// printf("%d\n", PopStack(&top));
	}
	
	return res;
}

/*************************************************
	Function: 		CreatStack
	Description: 	ͷ���뷨������������ֻ�Ǻ�
					��ͨ�ĺ���������в�ͬ
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
pstruStack CreatStack(void)
{
	pstruStack top = NULL;
	pstruStack base = NULL;
	top = base = MALLOC(struStack, 1);
	if (top == NULL || base == NULL)
	{
		printf("error malloc");
		exit(1);
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
void PushStack(ppstruStack top, int num)
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
int PopStack(ppstruStack top)
{
	int res;
	pstruStack p = *top;
	res = (*top)->num;
	*top = (*top)->next;
	free(p);
	p = NULL;
	return res;
}


