/****************************** (C) COPYRIGHT 2016 *******************************
 *
 *  	���ܣ����㿪��ʱ��
 *		Ҫ�㣺�ļ�������ѧϰʹ�ã��ṹ��ĳ���Ӧ�ú��˽�
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
	Description: 	����������е�ʱ��
	Calls: 			
	Called By:		main
	Input: 			��
	Output: 		��
	Return: 		0
*************************************************/
void Time(FILE *fp)
{
	struTime T = {0, 0, 0};
	rewind(fp);	
	while(1)
	{
		//ע��������ظ��رմ��ļ��ſ���ʵʱˢ�¸����ļ�����
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
		fclose(fp);		//�ر��ļ��������ǹرգ�ÿ���ļ����ݵ�д���������أ����fcloseδִ�У��ļ����ݾ�û������д��
	}
}



