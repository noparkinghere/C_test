/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：应用栈实现进制转换
 *		要点：数据结构栈的初步应用和了解
 *		注意：本程序只能转换10进制以下的书，没有对16进制等完善
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
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
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
	Description: 	进制转换函数
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
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
	
	//弹出栈中数据，以类似十进制的形式方便表示出来
	for (; i > 0; i--)
	{
		res = res * 10 + PopStack(&top);
		// printf("%d\n", PopStack(&top));
	}
	
	return res;
}

/*************************************************
	Function: 		CreatStack
	Description: 	头插入法建立单链表方法只是和
					普通的后面插入略有不同
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	压栈压入数据操作
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	出栈，将数据提出
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
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


