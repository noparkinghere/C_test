/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：寻找指定元素的指针
 *		要点：
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))
#define LEN	4



int *Search(int num, int n, int *p);



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
	int *p, *po;
	int i, num, n;
	puts("input the number:");
	scanf(" %d", &num);
	p = MALLOC(int, num);
	puts("input the contents");
	for(i = 0; i < num; i++)
	{
		scanf(" %d", &p[i]);
	}

	puts("input the search number");
	scanf(" %d", &n);
	po = Search(num, n, p);
	printf("the address: %p, %p", p, po);
	printf("\n");
}

/*************************************************
	Function: 		search
	Description: 	搜索这个元素的位置
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int * Search(int num, int n, int *p)
{
	int i;
	for(i = 0; i < num; i++)
	{
		if (n == p[i])
			return p + i;
	}
	return 0;
}

