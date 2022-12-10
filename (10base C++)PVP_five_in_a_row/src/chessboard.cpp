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

// class chessboard
// {
// public:
//     chessboard();
//     //~chessboard();
//     void CBdisplay(void);
// private:
//     /* data */
//     int upside;
//     int downside;
// };

chessboard::chessboard(void)
{
	int j, i; 
	
	Board[0][0] = 1;
	Board[0][SIZE - 1] = 2;
	Board[SIZE - 1][SIZE - 1] = 3;
	Board[SIZE - 1][0] = 4;
	
	for (j = 1; j <= SIZE - 2; j++)
	{
		Board[j][0] = 5;
	}
	
	for (i = 1; i <= SIZE - 2; i++)
	{
		Board[0][i] = 6;
	}
	
	for (j = 1; j <= SIZE - 2; j++)
	{
		Board[j][SIZE - 1] = 7;
	}
	
	for (i = 1; i <= SIZE - 2; i++)
	{
		Board[SIZE - 1][i] = 8;
	}
	
	for (j = 1; j <= SIZE - 2; j++)
	{
		for (i = 1; i <= SIZE - 2; i++)
		{
			Board[j][i] = 9;
		}
	}
}

void chessboard::CBdisplay(void)
{
	int i, j;
	char line;
	char ary;


	
	system("cls");   //清屏



	for(j = 0,line = 15; j <= SIZE - 1; j++)
	{
		printf("%2d",line);
		line -= 1;
		for(i = 0; i <= SIZE - 1; i++)
		{
			switch(Board[j][i])
			{
			case 1:
				printf(" ┏ ");
				break;
				
			case 2:
				printf(" ┓ ");
				break;
				
			case 3:
				printf(" ┛ ");
				break;
				
			case 4:
				printf(" ┗ ");
				break;
				
			case 5:
				printf(" ┠ ");
				break;
				
			case 6:
				printf(" ┯ ");
				break;
				
			case 7:
				printf(" ┨ ");
				break;
				
			case 8:
				printf(" ┷ ");
				break;
				
			case 9:
				printf(" ┼ ");
				break;
				
			case BLACKtem:      // 黑子上一步
				printf(" ▲ ");
				break;
				
			case WHITEtem:      //白子上一步
				printf(" △ ");
				break;
				
			case BLACK:      //黑子通常
				printf(" ●");
				break;
				
			case WHITE:
				printf(" ○");  //白子通常
				break;
			}
			if(i == SIZE - 1)
			{
				printf("\n");
			}
			
		}
	}
	
	printf("   ");
	for (ary = 'A'; ary < 'A' + SIZE ; ary++)
		printf(" %c ",ary);
	
	printf("\n");





}


// chessboard::~chessboard()
// {
// }


void chessboard::win(void){

        //win如果为0——黑胜，如果为1——百胜
    int j,i;
    chess chess;
    //printf("black win!!!!!  %d",chess.His_output(0,0));
    if(chess.His_output(0,0) == 1) printf("black win!!!!! NIUBI %d",chess.His_output(0,0));//每次检查一遍！黑子获胜！

    for (i = 0; i <= SIZE - 1; i++)
    {
        for (j = 0; j <= SIZE - 1; j++)//每一个点为单位，只需要看以这个点为中央是否连成五个棋子就可以了，以黑棋为例win最后为1
        {
            if( chess.His_output( j , i - 2) == 1  && \
            chess.His_output( j ,i - 1)  == 1 && \
            chess.His_output( j ,i ) == 1 && \
            chess.His_output( j ,i + 1) == 1 && \
            chess.His_output( j ,i + 2) == 1) black = 1;

            if( chess.His_output( j - 2, i ) == 1  && \
            chess.His_output( j - 1 ,i )  == 1 && \
            chess.His_output( j ,i ) == 1 && \
            chess.His_output( j + 1 ,i ) == 1 && \
            chess.His_output( j + 2 ,i ) == 1) black = 1;

            if( chess.His_output( j , i - 2) == 1  && \
            chess.His_output( j ,i - 1)  == 1 && \
            chess.His_output( j ,i ) == 1 && \
            chess.His_output( j ,i + 1) == 1 && \
            chess.His_output( j ,i + 2) == 1) black = 1;

            if( chess.His_output( j - 2, i ) == 1  && \
            chess.His_output( j - 1 ,i )  == 1 && \
            chess.His_output( j ,i ) == 1 && \
            chess.His_output( j + 1 ,i ) == 1 && \
            chess.His_output( j + 2 ,i ) == 1) black = 1;

        }
    }

    if(black == 1) printf("black win!  ");
    if(white == 1) printf("white win!  ");
}