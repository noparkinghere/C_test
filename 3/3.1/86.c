/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	功能：计算开机时间
 *		要点：文件操作的学习使用，结构体的初步应用和了解
 * 
 ********************************************************************************/
 
#include <stdio.h>
#include <unistd.h>



void Time(FILE *fp);


typedef struct
{
	int hour;
	int min;
	int sec;
}struTime;



int main(void)
{
	FILE *fp;
	fp = fopen("/root/Time.txt", "at");
	Time(fp);
	fclose(fp);
}

/*************************************************
	Function: 		Time
	Description: 	检测计算机运行的时间
	Calls: 			
	Called By:		main
	Input: 			无
	Output: 		无
	Return: 		0
*************************************************/
void Time(FILE *fp)
{
	struTime T = {0, 0, 0};
	rewind(fp);	
	while(1)
	{
		//注意这边需重复关闭打开文件才可以实时刷新更新文件内容
		fp = fopen("/root/Time.txt", "at");			
		//fp = fopen("C:\\Time.txt", "at");			
		printf("%d:%d:%d\n", T.hour, T.min, T.sec);
		fprintf(fp, "%d:%d:%d\n", T.hour, T.min, T.sec);
		sleep(1);
		T.sec++;
		if (T.sec == 60)
		{
			T.min++;
			T.sec = 0;
			if (T.min == 60)
			{
				T.hour++;
				T.min = 0;
			}
		}
		fclose(fp);		//关闭文件不仅仅是关闭，每次文件内容的写入与这个相关，如果fclose未执行，文件内容就没法正常写入
	}
}



