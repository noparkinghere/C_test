/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ���ά������ָ����о�
 *		Ҫ�㣺��ά���飬ָ��
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define ROWS	3
#define COLS	4


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
	int arr[ROWS][COLS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	printf("%d, %d, %d\n", arr, *arr, **arr);
	printf("%d, %d, %d", arr + 1, *(arr + 1), **(arr + 1));
}





