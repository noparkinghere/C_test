#define MALLOC(n,type)	((type*)malloc(sizeof(type)*n))



/*************************************************
	Function: 		Swap
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


/*************************************************
	Function: 		FindMax
	Description: 	查询数组中的最大值
					并返回最大值的地址
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		最大值地址
*************************************************/
int * FindMax(int num, int *array)
{
	int i;
	int *res = array;
	for (i = 0; i < num; i++)
	{
		if (*res < array[i])
			res = array + i;
	}
	return res;
}

/*************************************************
	Function: 		FindMin
	Description: 	查询数组中的最小值
					并返回最小值的地址
	Calls: 			
	Called By:		
	Input: 			无
	Output: 		无
	Return: 		最小值地址
*************************************************/
int * FindMin(int num, int *array)
{
	int i;
	int *res = array;
	for (i = 0; i < num; i++)
	{
		if (*res > array[i])
			res = array + i;
	}
	return res;
}


/*************************************************
	Function: 		InputDyadicArr
	Description: 	键盘输入数据，注意数组作为形参
					不得缺省二阶的长度
	Calls: 			
	Called By:		mian
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void InputDyadicArr(int f_row, int f_column, int f_value[][100])
{
	int i, j;
	printf("input the value:\n");

	for (i = 0; i < f_row; i++)
	{
		printf("\n");
		for (j = 0; j < f_column; j++)
			scanf("%d", &f_value[i][j]);
	}
}

/*************************************************
	Function: 		OutputDyadicArr
	Description: 	输出数组数据，注意数组作为形参
					不得缺省二阶的长度
	Calls: 			
	Called By:		mian
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void OutputDyadicArr(int f_row, int f_column, int f_value[][100])
{
	int i, j;
	for (i = 0; i < f_row; i++)
	{
		printf("\n");
		for (j = 0; j < f_column; j++)
			printf("%d\t", f_value[i][j]);
	}
}



/*************************************************
	Function: 		ReverseArray
	Description: 	翻转矩阵 行列互换
					不得缺省二阶的长度
	Calls: 			
	Called By:		mian
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void ReverseArray(int row, int column, int a[][100], int b[][100])
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			b[j][i] = a[i][j];
		}
	}
}


/*************************************************
	Function: 		InitString
	Description: 	初始化字符串
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void InitString(char *str)
{
	int i = 0;
	while ((str[i++] = getchar()) != '\n');
	str[i - 1] = '\0';
}

/*************************************************
	Function: 		ModifyStr
	Description: 	修改字符串
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void ModifyStr(int pos, char *str1, char *str2)
{
	int i;
	for (i = 0; i < stringlen(str2); i++)
	{
		str1[pos - 1 + i] = str2[i];
	}
}


/*************************************************
	Function: 		stringlen
	Description: 	计算字符串长度
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
int stringlen(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++);
	return i;
}


/*************************************************
	Function: 		InitArr
	Description: 	初始化数组
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void InitArr(int *arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		scanf("%d", arr + i);
	}
}

/*************************************************
	Function: 		InitArr
	Description: 	打印输出数组数据
	Calls: 			scanf	printf
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void OutArr(int *arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d\t", arr[i]);
	}	
	printf("\n");
}

/*************************************************
	Function: 		MaxArr
	Description: 	求数组中最大值
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		最大值
*************************************************/
int MaxArr(int *arr, int len)
{
	int res, i;
	for (i = 0; i < len; i++)
	{
		if (res < arr[i])
			res = arr[i];
	}
	return res;
}

/*************************************************
	Function: 		MinArr
	Description: 	求数组中最小值
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		最小值
*************************************************/
int MinArr(int *arr, int len)
{
	int res, i;
	for (i = 0; i < len; i++)
	{
		if (res > arr[i])
			res = arr[i];
	}
	return res;
}
