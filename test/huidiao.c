/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ��ص�����ʵ�ַ����㷨
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#define MALLOC(type,n)	((type*)malloc(sizeof(type)*n))
#define MAX 3

typedef int (*cmp)(void *, void *);	//ע������ͺ���Ҫһ��
typedef struct
{
	int id;
	char name[10];
}book, *Book;


int insert_struct(Book *pos, int id, char *name);
int insert_int(int **pos, int val);
int cmp_struct(void *p, void *q);
int cmp_int(void *p, void *q);
void *max(void *array[], int len, cmp func);


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
	Book array1[MAX];
	int *array2[MAX];
	int i;
	int id;
	int val;
	char name[10];
	Book res1;
	int *res2;
	
	for (i = 0; i < MAX; i++)
	{
		printf("input info of book\n");
		scanf("%d", &id);
		scanf("%s", name);
		if (insert_struct(array1 + i, id, name) == -1)
		{
			exit(1);
		}
		
		printf("input int \n");
		scanf("%d", &val);
		if (insert_int(array2 + i, val) == -1)
		{
			exit(1);
		}
	}
	
		res1 = (Book)max((void **)array1, MAX, cmp_struct);
		res2 = (int *)max((void **)array2, MAX, cmp_int);
		
		printf("the max of books : %d, %s\n", res1->id, res1->name);
		printf("the max of int : %d\n", *res2);
		
		return 0;		
}


/*************************************************
	Function: 		fun
	Description: 	����ͼ��ṹ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int insert_struct(Book *pos, int id, char *name)
{
	Book p;
	
	p = MALLOC(book, 1);
	if (p == NULL)
	{
		perror("fail to malloc\n");
		return -1;
	}
	
	p->id = id;
	strcpy(p->name, name);
	*pos = p;
	return 0;
}

/*************************************************
	Function: 		insert_int
	Description: 	��int���ݳ�ʼ��
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int insert_int(int **pos, int val)
{
	int *p;
	p = MALLOC(int, 1);
	
	*p = val;
	*pos = p;
	return 0;
}


/*************************************************
	Function: 		cmp_struct
	Description: 	����ṹ���ݵıȽ�
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int cmp_struct(void *p, void *q)
{
	Book a, b;
	a = (Book)p;
	b = (Book)q;
	
	if (a->id > b->id)
	{
		return 1;
	}
	else if (a->id < b->id)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

/*************************************************
	Function: 		cmp_int
	Description: 	�����������ݵıȽ�
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
int cmp_int(void *p, void *q)
{
	int *a, *b;
	a = (int *)p;	//ע�����������Ҫǿ��ת��
	b = (int *)q;
	
	if (*a > *b)
	{
		return 1;
	}
	else if (*a < *b)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}


/*************************************************
	Function: 		max
	Description: 	ʵ��һ��ķ��ͱȽϣ���ʵ����
					ͨ������������������ÿ�ε���
					��ͬ�ĺ�����ʵ����Բ�ͬ����
					���Ͳ�����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void *max(void *array[], int len, cmp func)
{
	int i;
	void *tmp;
	tmp = array[0];
	for (i = 1; i < len; i++)
	{
		if ((*func)(tmp, array[i]) == -1)
		{
			tmp = array[i];
		}
	}
	return tmp;
}


