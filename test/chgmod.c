/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：类型转换测试
 * 
 ********************************************************************************/

#include <stdio.h>

int tmp1 = 100;
int tmp2 = 200;
 
 
typedef struct 
{
	int array[2];
	char ch;
}Test;

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
	char *p = NULL;
	Test tmp = {0x12345678, 0x12345678, 0x30};
	p = (char *)&tmp;	//很多时候强制转换是必要的，不然无法编译通过
	// p = &tmp;
	printf("0x%X\n", *(char *)p);	//大端存储的方式
	printf("0x%X\n", *(int *)p);
	printf("0x%X\n", *(short *)p);
	printf("0x%X\n", *(long long *)p);
	printf("0x%X\n", *(Test *)p);//无法正确打印，因为%X无法表示这么多位
	printf("0x%X\n", p);
	printf("0x%X\n", p+1);
	printf("0x%X\n", (Test *)p);
	printf("0x%X\n", (Test *)p+1);
	// printf("%d", sizeof(int));
	// p = (int *)p;
	// printf("%d", *p);
	// p = (long *)p;
	// printf("%d", *p);
}


