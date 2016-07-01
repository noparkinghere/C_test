/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：大小端测试
 *		要点：测试编译出来的结果是大端模式还是小端模式
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


int TestEndian(void);


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
	int a = TestEndian();
	printf("%d\n", a);
}

/*************************************************
	Function: 		main
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
 TestEndian(void)
{
	int i = 1;
	return *(char *)(&i);

}

