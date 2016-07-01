/****************************** (C) COPYRIGHT 2016 *******************************
 
 *  	���ܣ�ָ��ṹ���ָ��
 *		Ҫ�㣺ָ���ʹ��
 * 
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(n,type)	((type*)malloc(sizeof(type)*n))




typedef struct 
{
	int Number;
	char Name[10];
	char Sex;
	char Love;
	int Age;
	float Score;
}StruStudent, *pStruStudent;




void InitStu(pStruStudent pStudent);
void OutStu(pStruStudent pStudent);


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
	StruStudent Student;
	pStruStudent pStudent = &Student;
	InitStu(pStudent);
	OutStu(pStudent);
}


void InitStu(pStruStudent pStudent)
{
	printf("Number:");
	scanf("%d", &pStudent->Number);
	printf("\nName:");
	scanf("%s", pStudent->Name);
	while(getchar() != '\n');//���������һ��\n����һ���ַ������Ӱ��
	printf("\nSex:");
	scanf("%c", &pStudent->Sex);
	printf("\nLove:");
	scanf("%c", &pStudent->Love);
	printf("\nAge:");
	scanf("%d", &pStudent->Age);	
	printf("\nScore:");
	scanf("%f", &pStudent->Score);
}


void OutStu(pStruStudent pStudent)
{
	printf("Number:%d\n", pStudent->Number);
	printf("Name:%s\n", pStudent->Name);
	printf("Sex:%c\n", pStudent->Sex);
	printf("Love:%c\n", pStudent->Love);
	printf("Age:%d\n", pStudent->Age);	
	printf("Score:%f\n", pStudent->Score);
}

