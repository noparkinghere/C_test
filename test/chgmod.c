/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�����ת������
 * 
 ********************************************************************************/

#include <stdio.h>

int tmp1 = 100;
int tmp2 = 200;
 
 
typedef struct 
{
	int array[2];
	char ch;
}Test;

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
	char *p = NULL;
	Test tmp = {0x12345678, 0x12345678, 0x30};
	p = (char *)&tmp;	//�ܶ�ʱ��ǿ��ת���Ǳ�Ҫ�ģ���Ȼ�޷�����ͨ��
	// p = &tmp;
	printf("0x%X\n", *(char *)p);	//��˴洢�ķ�ʽ
	printf("0x%X\n", *(int *)p);
	printf("0x%X\n", *(short *)p);
	printf("0x%X\n", *(long long *)p);
	printf("0x%X\n", *(Test *)p);//�޷���ȷ��ӡ����Ϊ%X�޷���ʾ��ô��λ
	printf("0x%X\n", p);
	printf("0x%X\n", p+1);
	printf("0x%X\n", (Test *)p);
	printf("0x%X\n", (Test *)p+1);
	// printf("%d", sizeof(int));
	// p = (int *)p;
	// printf("%d", *p);
	// p = (long *)p;
	// printf("%d", *p);
}


