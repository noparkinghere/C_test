/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ѭ����λ����һ��16λ
 *		Ҫ�㣺���������̿���
 *
 ********************************************************************************/

 
#include <stdio.h>

//unsigned short�ĳ���ȷ����intδ����ͬ
#define LEN		(sizeof(unsigned short) * 8)	//ע�����8
#define LEFT(a,b)	((a<<b)|(a>>(LEN-b)))
#define RIGHT(a,b)	((a>>b)|(a<<(LEN-b)))

// ����2
// #define OF(a, b) if(b < 0) \
		// a = a << b | a >> 16 - b ; \
		// else a = a >> b | a << 16 - b;
		
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
	
	// OF(num, bit);	//����2
	printf("result:%o\n", num);	
}


