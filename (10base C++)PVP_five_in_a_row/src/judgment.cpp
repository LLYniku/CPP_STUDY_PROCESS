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


//接下来建立一个棋子类，每下一步棋就将对应坐标值改成1（黑棋）,2（白棋），3,4分别是上一步棋
//裁判从中读取进行判断：禁手 or 胜利
//为什么每次都会直接black win！全局变量的使用！






void judgment::judge(void)
{
    //win如果为0——黑胜，如果为1——百胜
    int j,i;
    chess chess;
    //printf("black win!!!!!  %d",chess.His_output(0,0));
    if(chess.His_output(0,0) == 1) printf("black win!!!!!  %d",chess.His_output(0,0));//每次检查一遍！黑子获胜！

    for (i = 0; i <= SIZE - 1; i++)
    {
        for (j = 0; j <= SIZE - 1; j++)//每一个点为单位，只需要看以这个点为中央是否连成五个棋子就可以了，以黑棋为例win最后为1
        {
            // if( chess.His_Board[j][i - 2] == 1  && \
            // chess.His_Board[j][i - 1]  == 1 && \
            // chess.His_Board[j][i] == 1 && \
            // chess.His_Board[j][i + 1] == 1 && \
            // chess.His_Board[j][i + 2] == 1) win = 1;//100也是1的意思！不能这样判断

            // if( chess.His_Board[j - 2][i] == 1  && \
            // chess.His_Board[j - 1][i]  == 1 && \
            // chess.His_Board[j][i] == 1 && \
            // chess.His_Board[j + 1][i] == 1 && \
            // chess.His_Board[j + 2][i] == 1) win = 1;//100也是1的意思！不能这样判断

            // if( chess.His_output(0,0) == 1) win = 1;//100也是1的意思！不能这样判断

        }
    }



}