/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ����ģ�������ʹ��
 *		Ҫ�㣺���һ��ͳһ��׼����⣬�����������ʹ��
 * 		�ص㣺��̬���䣬�������洢��ʵ���߼����������洢
 *
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
	int *pBase;		//�洢�����һ��Ԫ�صĵ�ַ
	int len;		//�������Ԫ�ظ���,������ܳ���
	int cnt;		//��ǰ������ЧԪ�ظ�������ǰ���ݵ��±���
	// int increment;	//�Զ���������
}struArray;

void Swap(int *f_iOne, int *f_iTwo);
void InitArr(struArray *pStruArray, int length);
bool AppendArr(struArray *pStruArray, int val);	//׷��
bool InsertArr(struArray *pStruArray, int pos, int val);	//����
bool DeleteArr(struArray *pStruArray, int pos);	//ɾ��
bool Get(struArray *pStruArray, int pos, int *val);
bool IsEmpty(struArray *pStruArray);		//�ж��Ƿ�Ϊ��
bool IsFull(struArray *pStruArray);			//�ж��Ƿ�Ϊ��
void SortArr(struArray *pStruArray);		//����
void ShowArr(struArray *pStruArray);		//��ʾ����
void InverseArr(struArray *pStruArray);	//����
void DeleteAll(struArray *pStruArray);	//ɾ��ȫ��
bool FindVal(struArray *pStruArray, int val, int *pos);	//����ĳ��Ԫ��λ��

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
	int len;
	int res;
	int pos = 0;
	int val = 1030;
	struArray StruArray;
	printf("input the array length\n");
	scanf("%d", &len);
	InitArr(&StruArray, len);
	
	//����Ϊ���Գ���
	AppendArr(&StruArray, 512);
	ShowArr(&StruArray);
	AppendArr(&StruArray, 999);
	ShowArr(&StruArray);
	AppendArr(&StruArray, 1111);
	ShowArr(&StruArray);
	AppendArr(&StruArray, val);
	ShowArr(&StruArray);
	AppendArr(&StruArray, 666);
	ShowArr(&StruArray);
	InsertArr(&StruArray, 10, 40);
	ShowArr(&StruArray);
	DeleteArr(&StruArray, 9);
	ShowArr(&StruArray);
	if (FindVal(&StruArray, val, &pos))
	{
		printf("%d:%d\n", val, pos);
	}
	if (Get(&StruArray, 8, &res))
	{
		printf("res:%d\n", res);
	}
	SortArr(&StruArray);
	ShowArr(&StruArray);
	if (FindVal(&StruArray, val, &pos))
	{
		printf("%d:%d\n", val, pos);
	}
	InverseArr(&StruArray);
	ShowArr(&StruArray);
	if (FindVal(&StruArray, val, &pos))
	{
		printf("%d:%d\n", val, pos);
	}
	DeleteAll(&StruArray);
	return 0;
}

/*************************************************
	Function: 		InitArr
	Description: 	��ʼ������ṹ���еĸ�Ԫ��
	Calls: 			malloc
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void InitArr(struArray *pStruArray, int length)
{
	pStruArray->len = length;
	pStruArray->pBase = (int *)malloc(sizeof(int) * length);
	pStruArray->cnt = 0;
	if (pStruArray->pBase == NULL)
	{
		printf("malloc error!\n");
		exit(1);
	}
}

/*************************************************
	Function: 		IsEmpty
	Description: 	�ж����������Ƿ�洢Ϊ��
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsEmpty(struArray *pStruArray)
{
	if (0 == pStruArray->cnt)
		return true;
	else 
		return false;
}

/*************************************************
	Function: 		IsFull
	Description: 	�ж����������Ƿ�洢����
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool IsFull(struArray *pStruArray)
{
	if (pStruArray->cnt == pStruArray->len)
		return true;
	else 
		return false;
}

/*************************************************
	Function: 		AppendArr
	Description: 	����β�����һ����ֵ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
bool AppendArr(struArray *pStruArray, int val)	
{
	if (IsFull(pStruArray))
	{
		return false;
	}
	else
	{
		pStruArray->pBase[pStruArray->cnt] = val;
		(pStruArray->cnt)++;
		return true;
	}
}

/*************************************************
	Function: 		ShowArr
	Description: 	��ʾ��ӡ����ֵ���
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void ShowArr(struArray *pStruArray)
{
	int i;
	printf("the %d values are:\n", pStruArray->cnt);
	for (i = 0; i < pStruArray->cnt; i++)
	{
		printf("%d\t", pStruArray->pBase[i]);
	}
	printf("\n");
}

/*************************************************
	Function: 		InsertArr
	Description: 	�ڵ�num��Ԫ��ǰ����ָ����ֵ
	Calls: 			
	Called By:		
	Input: 			pos��ȡ������λ��
	Output: 		��
	Return: 		�Ƿ����ɹ�
*************************************************/
bool InsertArr(struArray *pStruArray, int pos, int val)
{
	int i;
	if (IsFull(pStruArray) || pos > pStruArray->cnt)
	{
		return false;
	}
	
	for (i = pStruArray->cnt - 1; i >= pos - 1; i--)
	{
		pStruArray->pBase[i + 1] = pStruArray->pBase[i];
	}
	pStruArray->pBase[i + 1] = val;
	pStruArray->cnt++;
	return true;
}

/*************************************************
	Function: 		DeleteArr
	Description: 	ɾ����num��Ԫ��
	Calls: 			
	Called By:		
	Input: 			posɾ��������λ��
	Output: 		��
	Return: 		�Ƿ�ɾ���ɹ�
*************************************************/
bool DeleteArr(struArray *pStruArray, int pos)	
{
	int i;
	if (IsEmpty(pStruArray) || pos > pStruArray->cnt)
	{
		return false;
	}
	
	for (i = pos; i < pStruArray->cnt; i++)
		pStruArray->pBase[i - 1] = pStruArray->pBase[i];
	pStruArray->cnt--;
	return true;
}

/*************************************************
	Function: 		Get
	Description: 	��õ�num��Ԫ���е�ֵ
	Calls: 			
	Called By:		
	Input: 			pStruArray ��ַ	
					pos��ȡ������λ��
	Output: 		res��õ�ֵ
	Return: 		�Ƿ��ȡ�ɹ�
*************************************************/
bool Get(struArray *pStruArray, int pos, int *val)
{
	if (IsEmpty(pStruArray) || pos > pStruArray->cnt)
	{
		return false;
	}
	
	*val = pStruArray->pBase[pos - 1];
	return true;
}

/*************************************************
	Function: 		DeleteAll
	Description: 	ɾ��ȫ��Ԫ��
	Calls: 			
	Called By:		
	Input: 			pStruArray ��ַ	
	Output: 		
	Return: 		�Ƿ��ȡ�ɹ�
*************************************************/
void DeleteAll(struArray *pStruArray)
{
	pStruArray->cnt = 0;
	pStruArray->len = 0;
	free(pStruArray->pBase);
	pStruArray->pBase = NULL;
}

/*************************************************
	Function: 		SortArr
	Description: 	��������
	Calls: 			
	Called By:		
	Input: 			pStruArray ��ַ	
	Output: 		
	Return: 		�Ƿ��ȡ�ɹ�
*************************************************/
void SortArr(struArray *pStruArray)
{
	int i, j;
	for (i = 0; i < pStruArray->cnt - 1; i++)
	{
		for (j = i + 1; j < pStruArray->cnt; j++)
		{
			if (pStruArray->pBase[i] > pStruArray->pBase[j])
				Swap(&(pStruArray->pBase[i]), &(pStruArray->pBase[j]));
		}		
	}
}

/*************************************************
	Function: 		SortArr
	Description: 	��������
	Calls: 			
	Called By:		
	Input: 			pStruArray ��ַ	
	Output: 		
	Return: 		�Ƿ��ȡ�ɹ�
*************************************************/
void InverseArr(struArray *pStruArray)
{
	int i, j;
	for (i = 0, j = pStruArray->cnt - 1; i < j; i++, j--)
		Swap(&(pStruArray->pBase[i]), &(pStruArray->pBase[j]));	
}

/*************************************************
	Function: 		FindVal
	Description: 	����ĳ��Ԫ��λ��
	Calls: 			
	Called By:		
	Input: 			pStruArray ��ַ	
	Output: 		
	Return: 		�Ƿ��ҵ���ֵ
*************************************************/
bool FindVal(struArray *pStruArray, int val, int *pos)
{
	int i;
	for (i = 0; i < pStruArray->cnt; i++)
	{
		if (pStruArray->pBase[i] == val)
		{
			*pos = i + 1;
			return true;
		}
	}
	return false;
}

/*************************************************
	Function: 		swap
	Description: 	�����������洢����ֵ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		
*************************************************/
void Swap(int *f_iOne, int *f_iTwo)
{
	int tmp;
	tmp = *f_iOne;
	*f_iOne = *f_iTwo;
	*f_iTwo = tmp;
}
