/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���С�˲���
 *		Ҫ�㣺���Ա�������Ľ���Ǵ��ģʽ����С��ģʽ
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


int TestEndian(void);


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
	int a = TestEndian();
	printf("%d\n", a);
}

/*************************************************
	Function: 		main
	Description: 	������
	Calls: 			scanf	printf
	Called By:		������
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
 TestEndian(void)
{
	int i = 1;
	return *(char *)(&i);

}

