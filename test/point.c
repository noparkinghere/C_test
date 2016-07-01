/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：指针测试程序
 * 
 ********************************************************************************/
 
 
#include <stdio.h>
#include <stdlib.h>


#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))

typedef struct 
{
	int *pBase;		//存储数组第一个元素的地址
	int len;		//容纳最大元素个数,数组的总长度
	int cnt;		//当前数组有效元素个数，当前数据的下标编号
	// int increment;	//自动增长因子
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


