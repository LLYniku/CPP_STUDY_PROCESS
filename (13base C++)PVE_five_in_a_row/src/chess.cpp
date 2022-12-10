/*【人人对战】五子棋——对象：白子，黑子，棋盘，玩家，时钟，裁判
棋盘对象：构造函数中进行全部初始化——给予开始的数值
display（写在内部函数当中）展示初始的棋盘。之后内部函数中进行对应数值的图形生成display。
（包括白子和黑子，一切可以显示的东西都用元素值取代）。
对象白子与黑子：构造函数可以不写，输入坐标为一个窗口，白手黑手轮流下棋，同时修改元素值重新
display棋盘每次刷新界面，注意需要记录上次下棋的位置
玩家对象：用于每次输入坐标值，提高适当的鲁棒性（错误坐标重新输入）
裁判对象：禁手以及获胜条件
*/

#include <iostream>
#include "../include/player.h"
#include "../include/chessboard.h"
#include "../include/chess.h"
#include "../include/judgment.h"
using namespace std;


int His_Board[SIZE][SIZE];//需要创建全局棋盘

//接下来建立一个棋子类，每下一步棋就将对应坐标值改成0（黑棋）,1（白棋），2,3分别是上一步棋,his棋盘初始值为100
//裁判从中读取进行判断：禁手 or 胜利

void chess::chessInit(void)//建立对象的时候进行初始化，棋盘上所有的值都是100
{
    int j, i; 
    for (i = 0; i <= SIZE - 1; i++)
    {
        for (j = 0; j <= SIZE - 1; j++)
        His_Board[j][i] = 100;
    }


    for (i = 0; i <= SIZE - 1; i++)
    {
        for (j = 0; j <= SIZE - 1; j++)
        Value_Board[j][i] = 0;
    }

}

int chess::His_output(int x,int y)
{
    return His_Board[x][y];
}

int chess::Val_output(int x,int y)
{
    return Value_Board[x][y];
}


void chess::Val_input(int j,int i)
{
    if(His_output( j , i ) != 1 && His_output( j ,i ) != 0)//此位置没有棋子，则有value值
    {
        Value_Board[j][i] =  16* His_output( j + 1,i );
    }
    else{
        Value_Board[j][i] = 0;
    }

}


void chess::His_input(int x,char y,int k,int p)
{
    judgment judgment;

    if(p == 1)
    {
        //回溯 
    }
    else{//P正常为0，就代表没有悔棋;  k == 2白棋，k == 1黑棋
        if(k == 0){
            His_Board[SIZE-x][y-'A'] = 1;//黑棋
        }
        else{
            His_Board[SIZE-x][y-'A'] = 0;//白棋
        }

    }

    judgment.judge();

}
