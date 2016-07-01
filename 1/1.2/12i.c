/****************************** (C) COPYRIGHT 2016 *******************************
 * 
 *  	功能：模拟ATM机小程序,1.密码验证，2.取款（需要密码）数据为全局变量数据程序
 *			不够完善，bug有很多 如：未对取出的钱超额验证，后续可能会进一步改进。
 *		要点：switch语句，流程控制函数。
 *		扩展建议：可以从增加管理员模式（可以动态录入数据），数据存入到硬盘文件中，
 *				  可以对文件加密，同时用户每次访问需要同文件中数据匹配才可以取钱，
 *				 用户每次取完钱后，数据会再次保存到硬盘文件中去。
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
	Description: 	主函数
	Calls: 			scanf	printf
	Called By:		编译器
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int main(void)
{
	int num, money, rest;
	char *passwd = (char *)malloc(100);
	while(1)
	{
		EntryDisp();	//入口界面
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
	Description: 	显示欢迎界面
	Calls: 			printf
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	密码验证函数，正确返回true
	Calls: 			printf
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	每次取钱后返回计算出的余额
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int RestMoney(int f_allmoney, int f_money)
{
	return (f_allmoney - f_money);
}


