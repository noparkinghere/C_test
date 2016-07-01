
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 /***************************************
* 程序名称：贪吃蛇游戏                      *
* 编译环境：vs2008                          *
* 作者相关：往事随风<1034882113>*
* 修改时间：2013-04-13                      *
***************************************/

#include <graphics.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <string.h>

// 引用 Windows Multimedia API
#pragma comment(lib,"Winmm.lib")

/***********宏定义区******************/
#define X    500            // 保存蛇节点坐标的个数
#define Y 500

int len = 640;
int wide = 480;
MCI_PLAY_PARMS mciplay;//定义播放参数mciplay
/***********结构定义区****************/
struct food
{
    int x;                        // 横坐标
    int y;                        // 纵坐标
    int flag;                    // 食物状态 1： 有食物； 0：没有食物
}food;

struct snake
{
    int x[X];                    // 蛇身横坐标
    int y[Y];
    int life;                    // 生命状态
    int node;                // 蛇的长度
    char direction;        // 蛇的方向
    int score;                // 分数
    int grade;                // 难度
    int speed;                // 速度
}snake;

/*************函数声明区**************/
void initsnake();                                        // 初始化一条蛇
void print_wall();                                    // 输出围墙
void out_food();                                    // 出现食物
void Gameover();                                    // 结束游戏
void Gamebegin();                                    // 开始游戏
void dead_case();                                    // 死亡情况(撞墙 撞自身)
void eat_food();                                        // 吃掉食物
void init_data();                                        // 初始化数据
void get_direction(char ch);                    // 得到方向
void print_snake();                                    // 输出蛇
void print_score();                                    // 输出分数
void set_grade();                                    // 设置等级
void RealseMusic(LPCTSTR strResName,char *DeviceStr);                // 播放资源文件中的音乐
void pass();                                            // 通关函数

/****************************************************/
// 提取指定模块中的资源文件
// 参数：
//        strDstFile:        目标文件名。提取的资源将保存在这里；
//        strResType:        资源类型；
//        strResName:        资源名称；
// 返回值：
//        true: 执行成功；
//        false: 执行失败。
/****************************************************/
bool ExtractResource(LPCTSTR strDstFile, LPCTSTR strResType, LPCTSTR strResName);    // 提取资源到临时文件

/************函数定义区***************/
void pass()
{
    if (snake.speed == 20)       
    {
        EndBatchDraw();
        IMAGE img;
        loadimage(&img,"IMAGE","PASS",len,wide,true);     // s输出通关图片
        putimage(0,0,&img);
        _getch();
        exit(0);
    }
}

bool ExtractResource(LPCTSTR strDstFile, LPCTSTR strResType, LPCTSTR strResName)
{
    // 创建文件
    HANDLE hFile = ::CreateFile(strDstFile, GENERIC_WRITE, NULL, NULL, CREATE_ALWAYS,   
                                                FILE_ATTRIBUTE_TEMPORARY, NULL);
    if (hFile == INVALID_HANDLE_VALUE)
        return false;

    // 查找资源文件中、加载资源到内存、得到资源大小
    HRSRC    hRes    = ::FindResource(NULL, strResName, strResType);
    HGLOBAL    hMem    = ::LoadResource(NULL, hRes);
    DWORD    dwSize    = ::SizeofResource(NULL, hRes);

    // 写入文件
    DWORD dwWrite = 0;      // 返回写入字节
    ::WriteFile(hFile, hMem, dwSize, &dwWrite, NULL);
    ::CloseHandle(hFile);

    return true;
}

void RealseMusic(LPCTSTR strResName,char *DeviceStr)
{
    // 产生临时文件的文件名
    TCHAR tmpmp3[_MAX_PATH];
    ::GetTempPath(_MAX_PATH, tmpmp3);
    _tcscat_s(tmpmp3,strResName);                        // VC 请用 _tcscat函数

    // 将 MP3 资源提取为临时文件
    ExtractResource(tmpmp3, "MP3",strResName);

    // 打开音乐
    TCHAR mcicmd[300];
    _stprintf_s(mcicmd,"open \"%s\" alias %s",tmpmp3,DeviceStr);
    mciSendString(mcicmd, NULL, 0, NULL);

    // 播放音乐
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
            snake.grade = grade;    // 最高只有7级
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

    setbkmode(TRANSPARENT);                                // 设置文字背景透明
    setcolor(RGB(255,255,0));                                    // 设置文字颜色
    outtextxy(x + len / 10,y1,"分数：");
    outtextxy(x + len / 6,y1,score);
    outtextxy(x + len / 10,y2,"操作说明");
    outtextxy(x + len / 10,y2 + 20,"a：向左走");
    outtextxy(x + len / 10,y2 + 40,"d：向右走");
    outtextxy(x + len / 10,y2 + 60,"w：向上走");
    outtextxy(x + len / 10,y2 + 80,"s：向下走");
    outtextxy(x + len / 10,y1 * 4,"等级：");
    outtextxy(x + len / 10 + 40,y1 * 4,grade);
    outtextxy(x + len / 10 + 50,y1 * 4,"级");
}

void print_snake()
{
    int i;

    setfillcolor(BLACK);                        // 设置当前填充色为黑色
    /* 输出蛇 */
    for (i = 0; i < snake.node; i++)
        fillrectangle(snake.x[i],snake.y[i],snake.x[i] + 10,snake.y[i] + 10);
    for (i = snake.node; i > 0; i--)        // 蛇体坐标除了蛇头都读取前一位坐标
    {
        snake.x[i] = snake.x[i - 1];
        snake.y[i] = snake.y[i - 1];
    }
}

void get_direction(char ch)
{
    /* 排除反方向 */
    if (snake.direction != 'a' &&  ch == 'd')
        snake.direction = 'd';
    else if (snake.direction != 'd' &&  ch == 'a')
        snake.direction = 'a';
    else if (snake.direction != 'w' &&  ch == 's')
        snake.direction = 's';
    else if (snake.direction != 's' &&  ch == 'w')
        snake.direction = 'w';

    /* 蛇移动过程中的方向 */
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
    /***初始化***/
    snake.score = 0;
    snake.x[0] = 20,snake.y[0] = 30;
    snake.node = 1;
    snake.life = 1;                                    // 1表示活着
    food.flag = 0;
    snake.grade = 1;
    snake.speed = 200;
}

void eat_food()
{
    mciplay.dwFrom = 0;
    /* 吃掉食物 */
    if (snake.x[0] == food.x && snake.y[0] == food.y)
    {
        // 播放吃的音乐
        mciSendString("seek AteMusic to 0",0,0,0);
        mciSendString("play AteMusic",NULL,0,0);
        setfillcolor(RGB(219,49,0));               
        fillrectangle(food.x,food.y,food.x + 10,food.y + 10);            // 擦掉食物

           
        snake.node++;                            // 蛇长加1
        food.flag = 0;                            // 改变食物状态
        snake.score += 10;                    // 改变分数   
    }
}

void dead_case()
{
    int i = 0;
    int x = 0;
    x =( len /3 + len % 3) * 2;

    /*  判断撞到自身 */
    for (i = 2; i < snake.node; i++)               
    {
        if (snake.x[i] == snake.x[0] && snake.y[i] == snake.y[0])
        {
            snake.life = 0;
            break;
        }
    }

    /* 判断是否撞墙 */
    if (snake.x[0] > x || snake.x[0] < 10 || snake.y[0] < 10 || snake.y[0] > 470)
        snake.life = 0;
}

void Gamebegin()
{
    IMAGE image;
    MOUSEMSG msg;

    // 初始化
    RealseMusic("BeginMusic.mp3","BeginMusic");
    RealseMusic("AteMusic.mp3","AteMusic");
    // 播放开始的音乐
    mciSendString("play BeginMusic", NULL, 0, NULL);

    loadimage(&image,"IMAGE","StartCover",len,wide,true);        // s输出开始图片
    putimage(0,0,&image);

//    setbkmode(TRANSPARENT);                                // 设置文字背景透明
//    setcolor(RGB(255,255,0));                                    // 设置文字颜色
//    outtextxy(len / 3 + 50,wide * 4 / 5,"按任意键继续");

    while (1)                                                        // 等待鼠标点击
    {
        msg = GetMouseMsg();
        if (msg.uMsg ==WM_LBUTTONDOWN)
            break;
    }
    mciSendString("close BeginMusic",NULL,0,NULL);        // 关闭开始音乐
    setbkcolor(RGB(219,49,0));        // 设置屏幕背景色为褐色
    cleardevice();                   
    print_wall();                            // 输出围墙
}

void Gameover()
{

    cleardevice();                            // 清屏
    IMAGE image;                        // 定义图片对像
    char score[10] = "0";                // 临时存储成绩

    loadimage(&image,"IMAGE","End",len,wide,true);        // 获取图片
    putimage(0,0,&image);                        // 输出图片
    setcolor(RED);
    _itoa_s(snake.score,score,10);                // 转换分数为自符
    outtextxy(270,160,"分数：");                // 输出分数
    outtextxy(320,160,score);
    outtextxy(270,180,"GAME OVER");
}

void out_food()
{
    int x = 0;

    x =( len /3 + len % 3) * 2;

    srand((unsigned)time(NULL));
    if (food.flag == 0)                                // 获取食物坐标
    {
        food.x = rand() % (x - 30) + 10;        // 避免出现在围墙范围
        food.y = rand() % 450 + 10;
        food.flag = 1;
    }
    while (food.x % 10 != 0)                    // 保证食物在格子里面要不吃不到
        food.x++;
    while (food.y % 10 != 0)
        food.y++;
    setfillcolor(RED);
    if (food.flag == 1)                                // 输出食物
        fillrectangle(food.x,food.y,food.x + 10,food.y + 10);
}

/* 画出围墙 */
void print_wall()
{   
    int i =0;
    int x = 0;

    x =( len /3 + len % 3) * 2;
    setfillcolor(RGB(220,115,10));                            // 设置围墙填充色
    for (i = 0; i < wide; i += 10)
    {
        fillrectangle(0,i,10,i + 10);                            // 左边围墙
        fillrectangle(x,i,x + 10,i + 10);                        // 中间围墙
        fillrectangle(len - 10,i,len,i + 10);                // 右边围墙                               
    }
    for (i = 0; i < len; i += 10)
    {
        fillrectangle(i,0,i + 10,10);                            // 上边围墙
        fillrectangle(i,wide - 10,i + 10,wide);            // 下边围墙
    }
}

void snake_game()
{
    char ch = '0';
   
    init_data();
   
    print_score();
    setfillcolor(BLACK);                            // 设置当前填充色为黑色
    /* 开始时显示一个点蛇头 */
    solidrectangle(snake.x[0],snake.y[0],snake.x[0] + 10,snake.y[0] + 10);

    snake.direction = _getch();                // 得到方向

    BeginBatchDraw();
    while (ch != 27)                                    // 按下esc键就退出循环
    {   
        print_wall();
        out_food();                                    // 输出食物

        if (_kbhit())
            ch = _getch();
       
        get_direction(ch);
        print_snake();
        dead_case();        // 蛇是否撞墙或者撞到自身
        /* 判断生命状态 */
        if (snake.life == 0)
            break;   
        eat_food();
        print_score();
        FlushBatchDraw();
        Sleep(snake.speed);
        cleardevice();
        pass();                // 判断通关
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
主要时间用在了资源的内嵌和调用上，程序功能的实现用了两个下午，添加音乐资源和图片资源花费了很长时间，共400行代码还有很多bug
这是实现了任何机子上一个exe就能运行的exe文件地址以及很多的资料
http://pan.baidu.com/share/link?shareid=401364&uk=2988506976
