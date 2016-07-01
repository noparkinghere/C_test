/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ���2����������IP��ʽ���
 *		Ҫ�㣺��Ȼ�ǽ���ת����ע�ⷽ���ܽ�
 *		ע�⣺��̬�ڴ����ʱ���ַ�������ռ���ֽ������ַ������ڽ�β���
 *				һ����\0���ַ�������ֶ������ڴ���Ҫ��������һ���ֽڣ�����
 *				�ᱨ�ڴ�����޷����гɹ�
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>

int	Trans(char *f_pHead, char *f_pEnd);
char * TransToIP(char * f_pString);
int IntToStr(int f_iInt, char * f_pAdd);


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
	printf("input the number:\n");
	
	//ע����33������32���ַ�����ĩβ�����һ��'\0',��̬�ڴ�����ʱ��������Ҫע�⡣
	char *pString = (char *)malloc(33);	
	
	char *pIPAdress;
	pIPAdress = TransToIP(pString);
	printf("%s\n", pIPAdress);
}

/*************************************************
	Function: 		TransToIP
	Description: 	��2�����ַ���ת��Ϊ10����IP��ʽ
	Calls: 			Trans	IntToStr
	Called By:		TransToIP
	Input: 			��
	Output: 		��
	Return: 		iRes
*************************************************/
char * TransToIP(char * f_pString)
{
	scanf("%s", f_pString);
//	printf("%s\n", f_pString);
	char *pIPString = (char *)malloc(20);//ΪIP��Ӧ���ַ�����16���ֽڿռ�

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
	Description: 	��һ��λ����2����ת��Ϊ10������ֵ
	Calls: 			scanf	printf
	Called By:		TransToIP
	Input: 			��
	Output: 		��
	Return: 		iRes
*************************************************/
int	Trans(char *f_pHead, char *f_pEnd)
{
	int i;
	int iRes = 0;
	int iLen = f_pEnd - f_pHead + 1;
	
	for (i = 0; i < iLen; i++)
	{
		//���ַ���ת��Ϊ���ͣ��ۻ����
		iRes = iRes * 2 + (int)(f_pHead[i] - '0');
	}

	return iRes;
}

/*************************************************
	Function: 		IntToStr
	Description: 	��һ��10������ֵת��Ϊ�ַ�������
					ָ���Ķ�̬�ڴ���
	Calls: 				
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		����Ļ�����ֵ
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
	
	//С��100��ֵ��ǰ���Զ���ȫ
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




