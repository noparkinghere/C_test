/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���ָ�����鹹���ַ�������
 *		Ҫ�㣺a[]����ַ�ָ�������
 * 		�ص㣺����a[]������ʽ��ʾ������a[]��һ�������ʾ��Ҫ��ָ���ʾ�ĸ���������
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


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
	int i;
	int num;
	char *a[] = {"Monday", "Tuesday", "Wednesday",
	       	"Thursday", "Friday", "Saturday", "Sunday"};

	for(i = 0; i < 7; i++)
	{
		printf("%s\t", a[i]);	//a[i] �ȼ��� *(a + i),
	}
	printf("\n");
	
	printf("input the day's number( 1 - 7 ):\n");
	scanf(" %d", &num);
	printf("%s\n", a[num - 1]);
}

