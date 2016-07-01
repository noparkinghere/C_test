/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：循环移位操作一共16位
 *		要点：函数，流程控制
 *
 ********************************************************************************/

 
#include <stdio.h>

//unsigned short的长度确定和int未必相同
#define LEN		(sizeof(unsigned short) * 8)	//注意乘以8
#define LEFT(a,b)	((a<<b)|(a>>(LEN-b)))
#define RIGHT(a,b)	((a>>b)|(a<<(LEN-b)))

// 方法2
// #define OF(a, b) if(b < 0) \
		// a = a << b | a >> 16 - b ; \
		// else a = a >> b | a << 16 - b;
		
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
	unsigned short num;
	int bit;
	printf("input the number:\n");
	scanf("%o", &num);
	printf("input the bit:\n");
	scanf("%d", &bit);
	if (bit <= 0)
		num = LEFT(num, 0 - bit);
	else 
		num = RIGHT(num, bit);
	
	// OF(num, bit);	//方法2
	printf("result:%o\n", num);	
}


