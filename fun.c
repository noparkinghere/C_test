#define MALLOC(n,type)	((type*)malloc(sizeof(type)*n))



/*************************************************
	Function: 		Swap
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


/*************************************************
	Function: 		FindMax
	Description: 	��ѯ�����е����ֵ
					���������ֵ�ĵ�ַ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		���ֵ��ַ
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
	Description: 	��ѯ�����е���Сֵ
					��������Сֵ�ĵ�ַ
	Calls: 			
	Called By:		
	Input: 			��
	Output: 		��
	Return: 		��Сֵ��ַ
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
	Description: 	�����������ݣ�ע��������Ϊ�β�
					����ȱʡ���׵ĳ���
	Calls: 			
	Called By:		mian
	Input: 			��
	Output: 		��
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
	Description: 	����������ݣ�ע��������Ϊ�β�
					����ȱʡ���׵ĳ���
	Calls: 			
	Called By:		mian
	Input: 			��
	Output: 		��
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
	Description: 	��ת���� ���л���
					����ȱʡ���׵ĳ���
	Calls: 			
	Called By:		mian
	Input: 			��
	Output: 		��
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
	Description: 	��ʼ���ַ���
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
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
	Description: 	�޸��ַ���
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
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
	Description: 	�����ַ�������
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
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
	Description: 	��ʼ������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
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
	Description: 	��ӡ�����������
	Calls: 			scanf	printf
	Called By:		main
	Input: 			��
	Output: 		��
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
	Description: 	�����������ֵ
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		���ֵ
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
	Description: 	����������Сֵ
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		��Сֵ
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
