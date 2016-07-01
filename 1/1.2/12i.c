/****************************** (C) COPYRIGHT 2016 *******************************
 * 
 *  	���ܣ�ģ��ATM��С����,1.������֤��2.ȡ���Ҫ���룩����Ϊȫ�ֱ������ݳ���
 *			�������ƣ�bug�кܶ� �磺δ��ȡ����Ǯ������֤���������ܻ��һ���Ľ���
 *		Ҫ�㣺switch��䣬���̿��ƺ�����
 *		��չ���飺���Դ����ӹ���Աģʽ�����Զ�̬¼�����ݣ������ݴ��뵽Ӳ���ļ��У�
 *				  ���Զ��ļ����ܣ�ͬʱ�û�ÿ�η�����Ҫͬ�ļ�������ƥ��ſ���ȡǮ��
 *				 �û�ÿ��ȡ��Ǯ�����ݻ��ٴα��浽Ӳ���ļ���ȥ��
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>

bool MatchPassword(char *f_passwd);
void EntryDisp();
int RestMoney(int f_allmoney, int f_money);



int allmoney = 10000;
char *password = "root";

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
	int num, money, rest;
	char *passwd = (char *)malloc(100);
	while(1)
	{
		EntryDisp();	//��ڽ���
		scanf("%d", &num);
		switch (num)
		{
			case 1:
					printf("input your password:\n");
					scanf("%s", passwd);
					if (MatchPassword(passwd))
					{
						printf("correct password!\n");
					}
					else
					{
						printf("error password!\n");
					}
					break;
			case 2:
					printf("input your password:\n");
					scanf("%s", passwd);
					if (MatchPassword(passwd))
					{
						printf("correct password, input money that you want\n");
						scanf("%d", &money);	
						rest = RestMoney(allmoney,money);
						printf("rest money is %d\n", rest);					
					}
					else
					{
						printf("error password!\n");
					}
					break;
			case 3:		break;
			default:	break;					
		}
		num = 0;
	}
}

/*************************************************
	Function: 		EntryDisp
	Description: 	��ʾ��ӭ����
	Calls: 			printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void EntryDisp()
{
	printf("*********** WELCOME *********\n");
	printf("* 1. password test:\n");
	printf("* 2. get money:\n");
	printf("* 3. return to menu:\n");
	printf("*****************************\n");
}

/*************************************************
	Function: 		MatchPassword
	Description: 	������֤��������ȷ����true
	Calls: 			printf
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool MatchPassword(char *f_passwd)
{
	int i = 0;
	do
	{
		if (f_passwd[i] != password[i])
			break;
		i++;
	} while ('\0' != f_passwd[i] && '\0' != password[i]);
		
	if (f_passwd[i] == '\0' && password[i] == '\0')
		return true;
	else 
		return false;	
}

/*************************************************
	Function: 		RestMoney
	Description: 	ÿ��ȡǮ�󷵻ؼ���������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int RestMoney(int f_allmoney, int f_money)
{
	return (f_allmoney - f_money);
}


