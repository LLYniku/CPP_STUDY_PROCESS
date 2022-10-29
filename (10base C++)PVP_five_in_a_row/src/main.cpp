/*【人人对战】五子棋——对象：白子，黑子，棋盘，玩家，时钟，裁判
棋盘对象：构造函数中进行全部初始化——给予开始的数值
display（写在内部函数当中）展示初始的棋盘。之后内部函数中进行对应数值的图形生成display。
（包括白子和黑子，一切可以显示的东西都用元素值取代）。
对象白子与黑子：构造函数可以不写，输入坐标为一个窗口，白手黑手轮流下棋，同时修改元素值重新
display棋盘每次刷新界面，注意需要记录上次下棋的位置
玩家对象：用于每次输入坐标值，提高适当的鲁棒性（错误坐标重新输入）
裁判对象：禁手以及获胜条件
*/

/*【人机对战】
加入时钟对象，加入智多星（计算每个棋盘上面的点的权重，注意已经下过的不能使用）
*/
#include <iostream>
#include "../include/chessboard.h"
using namespace std;

int main()
{
    char y;
	int x;
    chessboard chessboard;
    chessboard.InitBoardArray();
    chessboard.CBdisplay();
    while(1)
    {
        scanf("%c%d",&y,&x);  //获得屏幕输入的坐标
        getchar();
        
        chessboard.Board[SIZE-x][y-'a'] = BLACK;	//改变数组对应的数值
        chessboard.CBdisplay();

        scanf("%c%d",&y,&x);
        getchar();
        
        chessboard.Board[SIZE-x][y-'a'] = WHITE;
        chessboard.CBdisplay();
    }
    // system("pause");
}
