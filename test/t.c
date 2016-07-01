
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 /***************************************
* �������ƣ�̰������Ϸ                      *
* ���뻷����vs2008                          *
* ������أ��������<1034882113>*
* �޸�ʱ�䣺2013-04-13                      *
***************************************/

#include <graphics.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <string.h>

// ���� Windows Multimedia API
#pragma comment(lib,"Winmm.lib")

/***********�궨����******************/
#define X    500            // �����߽ڵ�����ĸ���
#define Y 500

int len = 640;
int wide = 480;
MCI_PLAY_PARMS mciplay;//���岥�Ų���mciplay
/***********�ṹ������****************/
struct food
{
    int x;                        // ������
    int y;                        // ������
    int flag;                    // ʳ��״̬ 1�� ��ʳ� 0��û��ʳ��
}food;

struct snake
{
    int x[X];                    // ���������
    int y[Y];
    int life;                    // ����״̬
    int node;                // �ߵĳ���
    char direction;        // �ߵķ���
    int score;                // ����
    int grade;                // �Ѷ�
    int speed;                // �ٶ�
}snake;

/*************����������**************/
void initsnake();                                        // ��ʼ��һ����
void print_wall();                                    // ���Χǽ
void out_food();                                    // ����ʳ��
void Gameover();                                    // ������Ϸ
void Gamebegin();                                    // ��ʼ��Ϸ
void dead_case();                                    // �������(ײǽ ײ����)
void eat_food();                                        // �Ե�ʳ��
void init_data();                                        // ��ʼ������
void get_direction(char ch);                    // �õ�����
void print_snake();                                    // �����
void print_score();                                    // �������
void set_grade();                                    // ���õȼ�
void RealseMusic(LPCTSTR strResName,char *DeviceStr);                // ������Դ�ļ��е�����
void pass();                                            // ͨ�غ���

/****************************************************/
// ��ȡָ��ģ���е���Դ�ļ�
// ������
//        strDstFile:        Ŀ���ļ�������ȡ����Դ�����������
//        strResType:        ��Դ���ͣ�
//        strResName:        ��Դ���ƣ�
// ����ֵ��
//        true: ִ�гɹ���
//        false: ִ��ʧ�ܡ�
/****************************************************/
bool ExtractResource(LPCTSTR strDstFile, LPCTSTR strResType, LPCTSTR strResName);    // ��ȡ��Դ����ʱ�ļ�

/************����������***************/
void pass()
{
    if (snake.speed == 20)       
    {
        EndBatchDraw();
        IMAGE img;
        loadimage(&img,"IMAGE","PASS",len,wide,true);     // s���ͨ��ͼƬ
        putimage(0,0,&img);
        _getch();
        exit(0);
    }
}

bool ExtractResource(LPCTSTR strDstFile, LPCTSTR strResType, LPCTSTR strResName)
{
    // �����ļ�
    HANDLE hFile = ::CreateFile(strDstFile, GENERIC_WRITE, NULL, NULL, CREATE_ALWAYS,   
                                                FILE_ATTRIBUTE_TEMPORARY, NULL);
    if (hFile == INVALID_HANDLE_VALUE)
        return false;

    // ������Դ�ļ��С�������Դ���ڴ桢�õ���Դ��С
    HRSRC    hRes    = ::FindResource(NULL, strResName, strResType);
    HGLOBAL    hMem    = ::LoadResource(NULL, hRes);
    DWORD    dwSize    = ::SizeofResource(NULL, hRes);

    // д���ļ�
    DWORD dwWrite = 0;      // ����д���ֽ�
    ::WriteFile(hFile, hMem, dwSize, &dwWrite, NULL);
    ::CloseHandle(hFile);

    return true;
}

void RealseMusic(LPCTSTR strResName,char *DeviceStr)
{
    // ������ʱ�ļ����ļ���
    TCHAR tmpmp3[_MAX_PATH];
    ::GetTempPath(_MAX_PATH, tmpmp3);
    _tcscat_s(tmpmp3,strResName);                        // VC ���� _tcscat����

    // �� MP3 ��Դ��ȡΪ��ʱ�ļ�
    ExtractResource(tmpmp3, "MP3",strResName);

    // ������
    TCHAR mcicmd[300];
    _stprintf_s(mcicmd,"open \"%s\" alias %s",tmpmp3,DeviceStr);
    mciSendString(mcicmd, NULL, 0, NULL);

    // ��������
//    mciSendString("play mymusic", NULL, 0, NULL);
}

void set_grade()
{
    int grade = 0;
   
    if (snake.speed > 30)
    {   
        grade = snake.score / 100 + 1;
        if (snake.grade != grade)
        {
            snake.grade = grade;    // ���ֻ��7��
            snake.speed -= 30;
        }
    }
}

void print_score()
{
    char score[10] = "0";
    char grade[3] = "0";
    int x = 0, y1 = 0,y2 = 0;
   
    x =( len /3 + len % 3) * 2;
    y1 = wide / 5;
    y2 = wide / 3;
    set_grade();
    _itoa_s(snake.score,score,10);
    _itoa_s(snake.grade,grade,10);

    setbkmode(TRANSPARENT);                                // �������ֱ���͸��
    setcolor(RGB(255,255,0));                                    // ����������ɫ
    outtextxy(x + len / 10,y1,"������");
    outtextxy(x + len / 6,y1,score);
    outtextxy(x + len / 10,y2,"����˵��");
    outtextxy(x + len / 10,y2 + 20,"a��������");
    outtextxy(x + len / 10,y2 + 40,"d��������");
    outtextxy(x + len / 10,y2 + 60,"w��������");
    outtextxy(x + len / 10,y2 + 80,"s��������");
    outtextxy(x + len / 10,y1 * 4,"�ȼ���");
    outtextxy(x + len / 10 + 40,y1 * 4,grade);
    outtextxy(x + len / 10 + 50,y1 * 4,"��");
}

void print_snake()
{
    int i;

    setfillcolor(BLACK);                        // ���õ�ǰ���ɫΪ��ɫ
    /* ����� */
    for (i = 0; i < snake.node; i++)
        fillrectangle(snake.x[i],snake.y[i],snake.x[i] + 10,snake.y[i] + 10);
    for (i = snake.node; i > 0; i--)        // �������������ͷ����ȡǰһλ����
    {
        snake.x[i] = snake.x[i - 1];
        snake.y[i] = snake.y[i - 1];
    }
}

void get_direction(char ch)
{
    /* �ų������� */
    if (snake.direction != 'a' &&  ch == 'd')
        snake.direction = 'd';
    else if (snake.direction != 'd' &&  ch == 'a')
        snake.direction = 'a';
    else if (snake.direction != 'w' &&  ch == 's')
        snake.direction = 's';
    else if (snake.direction != 's' &&  ch == 'w')
        snake.direction = 'w';

    /* ���ƶ������еķ��� */
    switch (snake.direction)
    {
    case 'a': snake.x[0] -= 10; break;
    case 'd': snake.x[0] += 10;break;                       
    case 'w': snake.y[0] -= 10;break;
    case 's': snake.y[0] += 10;break;
    }
}

void init_data()
{
    /***��ʼ��***/
    snake.score = 0;
    snake.x[0] = 20,snake.y[0] = 30;
    snake.node = 1;
    snake.life = 1;                                    // 1��ʾ����
    food.flag = 0;
    snake.grade = 1;
    snake.speed = 200;
}

void eat_food()
{
    mciplay.dwFrom = 0;
    /* �Ե�ʳ�� */
    if (snake.x[0] == food.x && snake.y[0] == food.y)
    {
        // ���ųԵ�����
        mciSendString("seek AteMusic to 0",0,0,0);
        mciSendString("play AteMusic",NULL,0,0);
        setfillcolor(RGB(219,49,0));               
        fillrectangle(food.x,food.y,food.x + 10,food.y + 10);            // ����ʳ��

           
        snake.node++;                            // �߳���1
        food.flag = 0;                            // �ı�ʳ��״̬
        snake.score += 10;                    // �ı����   
    }
}

void dead_case()
{
    int i = 0;
    int x = 0;
    x =( len /3 + len % 3) * 2;

    /*  �ж�ײ������ */
    for (i = 2; i < snake.node; i++)               
    {
        if (snake.x[i] == snake.x[0] && snake.y[i] == snake.y[0])
        {
            snake.life = 0;
            break;
        }
    }

    /* �ж��Ƿ�ײǽ */
    if (snake.x[0] > x || snake.x[0] < 10 || snake.y[0] < 10 || snake.y[0] > 470)
        snake.life = 0;
}

void Gamebegin()
{
    IMAGE image;
    MOUSEMSG msg;

    // ��ʼ��
    RealseMusic("BeginMusic.mp3","BeginMusic");
    RealseMusic("AteMusic.mp3","AteMusic");
    // ���ſ�ʼ������
    mciSendString("play BeginMusic", NULL, 0, NULL);

    loadimage(&image,"IMAGE","StartCover",len,wide,true);        // s�����ʼͼƬ
    putimage(0,0,&image);

//    setbkmode(TRANSPARENT);                                // �������ֱ���͸��
//    setcolor(RGB(255,255,0));                                    // ����������ɫ
//    outtextxy(len / 3 + 50,wide * 4 / 5,"�����������");

    while (1)                                                        // �ȴ������
    {
        msg = GetMouseMsg();
        if (msg.uMsg ==WM_LBUTTONDOWN)
            break;
    }
    mciSendString("close BeginMusic",NULL,0,NULL);        // �رտ�ʼ����
    setbkcolor(RGB(219,49,0));        // ������Ļ����ɫΪ��ɫ
    cleardevice();                   
    print_wall();                            // ���Χǽ
}

void Gameover()
{

    cleardevice();                            // ����
    IMAGE image;                        // ����ͼƬ����
    char score[10] = "0";                // ��ʱ�洢�ɼ�

    loadimage(&image,"IMAGE","End",len,wide,true);        // ��ȡͼƬ
    putimage(0,0,&image);                        // ���ͼƬ
    setcolor(RED);
    _itoa_s(snake.score,score,10);                // ת������Ϊ�Է�
    outtextxy(270,160,"������");                // �������
    outtextxy(320,160,score);
    outtextxy(270,180,"GAME OVER");
}

void out_food()
{
    int x = 0;

    x =( len /3 + len % 3) * 2;

    srand((unsigned)time(NULL));
    if (food.flag == 0)                                // ��ȡʳ������
    {
        food.x = rand() % (x - 30) + 10;        // ���������Χǽ��Χ
        food.y = rand() % 450 + 10;
        food.flag = 1;
    }
    while (food.x % 10 != 0)                    // ��֤ʳ���ڸ�������Ҫ���Բ���
        food.x++;
    while (food.y % 10 != 0)
        food.y++;
    setfillcolor(RED);
    if (food.flag == 1)                                // ���ʳ��
        fillrectangle(food.x,food.y,food.x + 10,food.y + 10);
}

/* ����Χǽ */
void print_wall()
{   
    int i =0;
    int x = 0;

    x =( len /3 + len % 3) * 2;
    setfillcolor(RGB(220,115,10));                            // ����Χǽ���ɫ
    for (i = 0; i < wide; i += 10)
    {
        fillrectangle(0,i,10,i + 10);                            // ���Χǽ
        fillrectangle(x,i,x + 10,i + 10);                        // �м�Χǽ
        fillrectangle(len - 10,i,len,i + 10);                // �ұ�Χǽ                               
    }
    for (i = 0; i < len; i += 10)
    {
        fillrectangle(i,0,i + 10,10);                            // �ϱ�Χǽ
        fillrectangle(i,wide - 10,i + 10,wide);            // �±�Χǽ
    }
}

void snake_game()
{
    char ch = '0';
   
    init_data();
   
    print_score();
    setfillcolor(BLACK);                            // ���õ�ǰ���ɫΪ��ɫ
    /* ��ʼʱ��ʾһ������ͷ */
    solidrectangle(snake.x[0],snake.y[0],snake.x[0] + 10,snake.y[0] + 10);

    snake.direction = _getch();                // �õ�����

    BeginBatchDraw();
    while (ch != 27)                                    // ����esc�����˳�ѭ��
    {   
        print_wall();
        out_food();                                    // ���ʳ��

        if (_kbhit())
            ch = _getch();
       
        get_direction(ch);
        print_snake();
        dead_case();        // ���Ƿ�ײǽ����ײ������
        /* �ж�����״̬ */
        if (snake.life == 0)
            break;   
        eat_food();
        print_score();
        FlushBatchDraw();
        Sleep(snake.speed);
        cleardevice();
        pass();                // �ж�ͨ��
    }
    EndBatchDraw();
}

void main()
{
    initgraph(len,wide);

    Gamebegin();
    snake_game();
    Gameover();

    _getch();
    closegraph();
}
��Ҫʱ����������Դ����Ƕ�͵����ϣ������ܵ�ʵ�������������磬���������Դ��ͼƬ��Դ�����˺ܳ�ʱ�䣬��400�д��뻹�кܶ�bug
����ʵ�����κλ�����һ��exe�������е�exe�ļ���ַ�Լ��ܶ������
http://pan.baidu.com/share/link?shareid=401364&uk=2988506976
