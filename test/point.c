/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ�ָ����Գ���
 * 
 ********************************************************************************/
 
 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))

typedef struct 
{
	int *pBase;		//�洢�����һ��Ԫ�صĵ�ַ
	int len;		//�������Ԫ�ظ���,������ܳ���
	int cnt;		//��ǰ������ЧԪ�ظ�������ǰ���ݵ��±���
	// int increment;	//�Զ���������
}struArray;

char *GetString(void);


int main(void)
{
	char *p = "hello";
	char a[100] = "world";
	char *str = NULL;
	// printf("%s\n", p);
	// printf("%s\n", a);
	// p[0] = 'a';
	a[0] = 'a';
	p = MALLOC(char, 10);
	// scanf("%s", p);
	// printf("%s\n", p);
	// printf("%s\n", a);
	// scanf("%s", a);
	// printf("%s\n", a);
	// printf("a:%d\n", sizeof(a));
	// printf("p:%d\n", sizeof(p));
	// printf("p:%d\n", sizeof(struArray));
	str = GetString();
	printf("%p\n", str);
	printf("%s\n", str);
}


char *GetString(void)
{
	char p1[] = "hello world";
	char p2[] = "hello world";
	char *q1 = "hello world";
	char *q2 = "hello world1";
	printf("%s\n", p1);
	printf("%s\n", p2);
	printf("%s\n", q1);
	printf("%s\n", q2);
	printf("%p\n", p1);
	printf("%p\n", p2);
	printf("%p\n", q1);
	printf("%p\n", q2);
	// p[0] = 'o';
	// q[0] = 'o';
	
	// printf("%s\n", p);
	// printf("%s\n", q);
	// printf("%p\n", p);
	// printf("%p\n", p+1);
	// printf("%p\n", q);
	// printf("%p\n", q+1);

	return q2;
}


