/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：信息查询
 *		要点：结构体的初步应用和了解
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>

#define NUM 5




typedef struct
{
	char name[20];
	double number;
}struPhone, *pstruPhone;


bool IsMatch(char *str1, char *str2);
struPhone Search(char *str, struPhone *User, int num);



int main(void)
{
	int i;
	struPhone User[100];
	struPhone Res;
	char str[20];
	int num = 0;
	for (i = 0; i < 100; i++)
	{
		scanf("%s", User[i].name);
		if (User[i].name[0] == '#')	//读入为#终结循环
			break;
		scanf("%lf", &User[i].number);
		num++;
	}
	printf("input the name:");
	scanf("%s", str);
	Res = Search(str, User, num);
	printf("name:%s\ttel:%.0lf", Res.name, Res.number);
}

/*************************************************
	Function: 		Search
	Description: 	检索满足的数据并返回值
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
struPhone Search(char *str, struPhone *User, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		if (IsMatch(str, User[i].name))
			return User[i];
	}
	printf("error\n");
}

/*************************************************
	Function: 		IsMatch
	Description: 	判断是否匹配
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
bool IsMatch(char *str1, char *str2)
{
	int i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return false;
		i++;
	}
	return true;
}
