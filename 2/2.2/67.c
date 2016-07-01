/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：用指针数组构造字符串数组
 *		要点：a[]存放字符指针变量，
 * 		重点：能用a[]数组形式表示，都用a[]，一般数组表示法要比指针表示的更加清晰！
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


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
	int i;
	int num;
	char *a[] = {"Monday", "Tuesday", "Wednesday",
	       	"Thursday", "Friday", "Saturday", "Sunday"};

	for(i = 0; i < 7; i++)
	{
		printf("%s\t", a[i]);	//a[i] 等价于 *(a + i),
	}
	printf("\n");
	
	printf("input the day's number( 1 - 7 ):\n");
	scanf(" %d", &num);
	printf("%s\n", a[num - 1]);
}

