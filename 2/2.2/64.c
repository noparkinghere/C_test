/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	功能：二维数组与指针的研究
 *		要点：二维数组，指针
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define ROWS	3
#define COLS	4


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
	int arr[ROWS][COLS] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	printf("%d, %d, %d\n", arr, *arr, **arr);
	printf("%d, %d, %d", arr + 1, *(arr + 1), **(arr + 1));
}





