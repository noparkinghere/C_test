/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�С����������
 *		Ҫ�㣺���������̿���
 * 		�ص㣺����for��������ã�����˼·���㷨
 *
 ********************************************************************************/

 
#include <stdio.h>



float Cal(int init, int cnt);



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

//�����ǵݹ飬���õݹ�ķ������˽���������
// float Cal(init, cnt)
// {
	// if (cnt == 10)
		// return init;
	// else
		// Cal(init / 2, cnt++);
// }

/*************************************************
	Function: 		Cal
	Description: 	���㳤��
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
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


