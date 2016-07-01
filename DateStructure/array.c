/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：设计模拟数组的使用
 *		要点：设计一套统一标准的类库，其他程序可以使用
 * 		重点：动态分配，非连续存储来实现逻辑上面连续存储
 *
 ********************************************************************************/

 
#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
	int *pBase;		//存储数组第一个元素的地址
	int len;		//容纳最大元素个数,数组的总长度
	int cnt;		//当前数组有效元素个数，当前数据的下标编号
	// int increment;	//自动增长因子
}struArray;

void Swap(int *f_iOne, int *f_iTwo);
void InitArr(struArray *pStruArray, int length);
bool AppendArr(struArray *pStruArray, int val);	//追加
bool InsertArr(struArray *pStruArray, int pos, int val);	//插入
bool DeleteArr(struArray *pStruArray, int pos);	//删除
bool Get(struArray *pStruArray, int pos, int *val);
bool IsEmpty(struArray *pStruArray);		//判断是否为空
bool IsFull(struArray *pStruArray);			//判断是否为满
void SortArr(struArray *pStruArray);		//排序
void ShowArr(struArray *pStruArray);		//显示数组
void InverseArr(struArray *pStruArray);	//逆序
void DeleteAll(struArray *pStruArray);	//删除全部
bool FindVal(struArray *pStruArray, int val, int *pos);	//查找某个元素位置

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
	int len;
	int res;
	int pos = 0;
	int val = 1030;
	struArray StruArray;
	printf("input the array length\n");
	scanf("%d", &len);
	InitArr(&StruArray, len);
	
	//下列为测试程序
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
	Description: 	初始化数组结构体中的各元素
	Calls: 			malloc
	Called By:		main
	Input: 			无
	Output: 		无
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
	Description: 	判断所见数组是否存储为空
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
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
	Description: 	判断所见数组是否存储已满
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
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
	Description: 	数组尾部添加一个数值
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
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
	Description: 	显示打印出数值结果
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
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
	Description: 	在第num个元素前插入指定数值
	Calls: 			
	Called By:		
	Input: 			pos获取的数组位置
	Output: 		无
	Return: 		是否插入成功
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
	Description: 	删除第num个元素
	Calls: 			
	Called By:		
	Input: 			pos删除的数组位置
	Output: 		无
	Return: 		是否删除成功
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
	Description: 	获得第num个元素中的值
	Calls: 			
	Called By:		
	Input: 			pStruArray 地址	
					pos获取的数组位置
	Output: 		res获得的值
	Return: 		是否获取成功
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
	Description: 	删除全部元素
	Calls: 			
	Called By:		
	Input: 			pStruArray 地址	
	Output: 		
	Return: 		是否获取成功
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
	Description: 	排序数组
	Calls: 			
	Called By:		
	Input: 			pStruArray 地址	
	Output: 		
	Return: 		是否获取成功
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
	Description: 	逆序数组
	Calls: 			
	Called By:		
	Input: 			pStruArray 地址	
	Output: 		
	Return: 		是否获取成功
*************************************************/
void InverseArr(struArray *pStruArray)
{
	int i, j;
	for (i = 0, j = pStruArray->cnt - 1; i < j; i++, j--)
		Swap(&(pStruArray->pBase[i]), &(pStruArray->pBase[j]));	
}

/*************************************************
	Function: 		FindVal
	Description: 	查找某个元素位置
	Calls: 			
	Called By:		
	Input: 			pStruArray 地址	
	Output: 		
	Return: 		是否找到了值
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
	Description: 	交换两变量存储的数值
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		
*************************************************/
void Swap(int *f_iOne, int *f_iTwo)
{
	int tmp;
	tmp = *f_iOne;
	*f_iOne = *f_iTwo;
	*f_iTwo = tmp;
}
