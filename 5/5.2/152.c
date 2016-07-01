/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��������ȫƽ����
 *		Ҫ�㣺����ѧӦ�ã�����Ȥ��
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int GetBit(int num, int bit);
bool IsSquare(int num);
bool IsFun(int num);




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
	printf("the result is:\n");
	
	//��100-999֮�����
	for (i = 100; i < 1000; i++)
	{
		if (IsSquare(i) && IsFun(i))
		{
			printf("%d\t", i);
		}
	}
	printf("\n");
}


/*************************************************
	Function: 		IsSquare
	Description: 	�Ƿ�����ȫƽ����
	Calls: 			scanf	printf
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsSquare(int num)
{
	if ((int)sqrt(num) * (int)sqrt(num) == num)
		return true;
	else 
		return false;
}

/*************************************************
	Function: 		IsFun
	Description: 	�Ƿ�����������������ͬ
	Calls: 			scanf	printf
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsFun(int num)
{
	if ((GetBit(num, 1) != GetBit(num, 2) && GetBit(num, 1) != GetBit(num, 3) \
		&&GetBit(num, 2) != GetBit(num, 3)) || (GetBit(num, 1) == GetBit(num, 2) \
		&& GetBit(num, 1) == GetBit(num, 3)))
	{
		return false;
	}
	return true;
}



/*************************************************
	Function: 		IsFun
	Description: 	�Ƿ�����������������ͬ
	Calls: 			scanf	printf
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int GetBit(int num, int bit)
{
	int i;
	int res = 0;
	for (i = 0; i < bit; i++)
	{
		res = num % 10;
		num /= 10;
	}
	return res;
}

