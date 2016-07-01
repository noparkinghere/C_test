/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：小球下落问题
 *		要点：函数，流程控制
 * 		重点：掌握for的灵活运用，程序思路和算法
 *
 ********************************************************************************/

 
#include <stdio.h>



float Cal(int init, int cnt);



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
	int init;
	int cnt;
	float length;
	printf("the initial height:\n");
	scanf("%d", &init);
	printf("the total count:\n");
	scanf("%d", &cnt);
	length = Cal(init, cnt);
	printf("the total length:%f\n", length);
}

//看似是递归，但用递归的方法不宜解决这个问题
// float Cal(init, cnt)
// {
	// if (cnt == 10)
		// return init;
	// else
		// Cal(init / 2, cnt++);
// }

/*************************************************
	Function: 		Cal
	Description: 	计算长度
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
float Cal(int init, int cnt)
{
	int i;
	float res = (float)init;
	float tmp = (float)init;
	for (i = 0; i < 9; i++)
	{
		tmp /= 2;	
		res = res + tmp * 2;
	}
	printf("%f\n", tmp / 2);
	return res;
}


