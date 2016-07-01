/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：将2进制数据以IP形式输出
 *		要点：仍然是进制转换，注意方法总结
 *		注意：动态内存分配时候，字符串输入占用字节数，字符串会在结尾添加
 *				一个‘\0’字符，因此手动分配内存需要额外扩充一个字节，否则
 *				会报内存错误，无法运行成功
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>

int	Trans(char *f_pHead, char *f_pEnd);
char * TransToIP(char * f_pString);
int IntToStr(int f_iInt, char * f_pAdd);


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
	printf("input the number:\n");
	
	//注意是33，不是32，字符输入末尾会添加一个'\0',动态内存分配的时候尤其需要注意。
	char *pString = (char *)malloc(33);	
	
	char *pIPAdress;
	pIPAdress = TransToIP(pString);
	printf("%s\n", pIPAdress);
}

/*************************************************
	Function: 		TransToIP
	Description: 	将2进制字符串转换为10进制IP形式
	Calls: 			Trans	IntToStr
	Called By:		TransToIP
	Input: 			无
	Output: 		无
	Return: 		iRes
*************************************************/
char * TransToIP(char * f_pString)
{
	scanf("%s", f_pString);
//	printf("%s\n", f_pString);
	char *pIPString = (char *)malloc(20);//为IP对应的字符给出16个字节空间

	IntToStr(Trans(f_pString, f_pString + 7), pIPString);
	pIPString[3] = '.';
	IntToStr(Trans(f_pString + 8, f_pString + 15), pIPString + 4);
	pIPString[7] = '.';
	IntToStr(Trans(f_pString + 16, f_pString + 23), pIPString + 8);
	pIPString[11] = '.';
	IntToStr(Trans(f_pString + 24, f_pString + 31), pIPString + 12);
	pIPString[15] = '\0';
	return pIPString;
}


/*************************************************
	Function: 		Trans
	Description: 	将一定位数的2进制转换为10进制数值
	Calls: 			scanf	printf
	Called By:		TransToIP
	Input: 			无
	Output: 		无
	Return: 		iRes
*************************************************/
int	Trans(char *f_pHead, char *f_pEnd)
{
	int i;
	int iRes = 0;
	int iLen = f_pEnd - f_pHead + 1;
	
	for (i = 0; i < iLen; i++)
	{
		//将字符型转换为整型，累积相加
		iRes = iRes * 2 + (int)(f_pHead[i] - '0');
	}

	return iRes;
}

/*************************************************
	Function: 		IntToStr
	Description: 	将一定10进制数值转换为字符串存入
					指定的动态内存中
	Calls: 				
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		错误的话返回值
*************************************************/
int IntToStr(int f_iInt, char * f_pAdd)
{
	int i, j, k = 0;
	int iCount = 0;
	int tmp = f_iInt;
	if (f_iInt < 0)
	{
		printf("error\n");
		return 1;		
	}
	
	do
	{
		iCount++;
	}while(0 != (tmp /= 10));
	
	//小于100的值，前面自动补全
	if (f_iInt < 100)		
		f_pAdd[k++] = ' ';
	
	for (i = iCount; i >0; i--)
	{
		tmp = f_iInt;
		
		for (j = 0; j < i - 1; j++)
		{
			tmp /= 10;
			// printf("%d\t", tmp);
		}
		
		f_pAdd[k++] = tmp % 10 + '0';
	}

	// printf("%s\n", f_pAdd);
}




