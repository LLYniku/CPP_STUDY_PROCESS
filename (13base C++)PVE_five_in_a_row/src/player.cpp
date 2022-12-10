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

#define _CRT_SECURE_NO_WARNINGS
//接下来建立一个棋子类，每下一步棋就将对应坐标值改成1（黑棋）,2（白棋），3,4分别是上一步棋
//裁判从中读取进行判断：禁手 or 胜利


void player::input(void)
{
    char y,n;
	int x,m;
    int j,i;
    //创建历史棋盘
    chess chess;//只能构建一次！
    chessboard chessboard;//只能构建一次！
    //chessboard.InitBoardArray();
    chess.chessInit();
    chessboard.CBdisplay();
    while(1)
    {
        
        scanf("%c%d",&y,&x);  //获得屏幕输入的坐标
        getchar();
        chess.His_input(x, y, 0,0);
        chessboard.Board[SIZE-x][y-'A'] = BLACK;	//改变数组对应的数值
        // chessboard.Board[1][0] = BLACK;	//改变数组对应的数值
        chessboard.CBdisplay();
        chessboard.win();



    //printf("black win!!!!!  %d",chess.His_output(0,0));

    for (i = 0; i <= SIZE - 1; i++)
    {
        for (j = 0; j <= SIZE - 1; j++)//每一个点为单位，只需要看以这个点为中央是否连成五个棋子就可以了，以黑棋为例win最后为1
        {
            // chess.Val_input(j, i);刚刚改的！！！！！！




//黑子连成五子即为获胜
            if( chess.His_output( j , i - 2) == 1  && \
            chess.His_output( j ,i - 1)  == 1 && \
            chess.His_output( j ,i ) == 1 && \
            chess.His_output( j ,i + 1) == 1 && \
            chess.His_output( j ,i + 2) == 1) printf("black win!");

            if( chess.His_output( j - 2, i ) == 1  && \
            chess.His_output( j - 1 ,i )  == 1 && \
            chess.His_output( j ,i ) == 1 && \
            chess.His_output( j + 1 ,i ) == 1 && \
            chess.His_output( j + 2 ,i ) == 1) printf("black win!");

            if( chess.His_output( j - 2, i - 2) == 1  && \
            chess.His_output( j - 1,i - 1)  == 1 && \
            chess.His_output( j ,i ) == 1 && \
            chess.His_output( j + 1,i + 1) == 1 && \
            chess.His_output( j + 2,i + 2) == 1) printf("black win!");

            if( chess.His_output( j - 2, i + 2) == 1  && \
            chess.His_output( j - 1 ,i + 1)  == 1 && \
            chess.His_output( j ,i ) == 1 && \
            chess.His_output( j + 1 ,i - 1) == 1 && \
            chess.His_output( j + 2 ,i - 2) == 1) printf("black win!");

//白子连成五子即为获胜
            if( chess.His_output( j , i - 2) == 0  && \
            chess.His_output( j ,i - 1)  == 0 && \
            chess.His_output( j ,i ) == 0 && \
            chess.His_output( j ,i + 1) == 0 && \
            chess.His_output( j ,i + 2) == 0) printf("white win!");

            if( chess.His_output( j - 2, i ) == 0  && \
            chess.His_output( j - 1 ,i )  == 0 && \
            chess.His_output( j ,i ) == 0 && \
            chess.His_output( j + 1 ,i ) == 0 && \
            chess.His_output( j + 2 ,i ) == 0) printf("white win!");

            if( chess.His_output( j - 2, i - 2) == 0  && \
            chess.His_output( j - 1,i - 1)  == 0 && \
            chess.His_output( j ,i ) == 0 && \
            chess.His_output( j + 1,i + 1) == 0 && \
            chess.His_output( j + 2,i + 2) == 0) printf("white win!");

            if( chess.His_output( j - 2, i + 2) == 0  && \
            chess.His_output( j - 1 ,i + 1)  == 0 && \
            chess.His_output( j ,i ) == 0 && \
            chess.His_output( j + 1 ,i - 1) == 0 && \
            chess.His_output( j + 2 ,i - 2) == 0) printf("white win!");


        }
    }



        // scanf("%c%d",&y,&x);
        // getchar();
        // chess.His_input(x, y, 1,0);













































        i = 0;
        j = 0;

        do{
            
        i++;
        j++;
        
        m = rand()%(15-1+1)+1;
        n = rand()%('O'-'A'+1)+'A';

        
        // do{
        //     m = j;
        //     n = 'A'+ i ;
        // }while(chess.Value_Board[j][i]  <  16);

        }
        while(chess.His_output( j ,i ) == 1 ||chess.His_output( j ,i ) == 0);

        chess.His_input(m, n, 1,0);
        chessboard.Board[SIZE-m][n-'A'] = WHITE;
        chessboard.CBdisplay();
        chessboard.win();

        // printf(" %d ",chess.His_Board[0][0]);
        // printf("%d\n",chess.His_output(0,0));
        // judgment.judge();
        //if(chess.His_output(0,0) == 1) printf("black win!!!!!");//每次检查一遍！黑子获胜！

    for (i = 0; i <= SIZE - 1; i++)
    {
        for (j = 0; j <= SIZE - 1; j++)//每一个点为单位，只需要看以这个点为中央是否连成五个棋子就可以了，以黑棋为例win最后为1
        {
//黑子连成五子即为获胜
            if( chess.His_output( j , i - 2) == 1  && \
            chess.His_output( j ,i - 1)  == 1 && \
            chess.His_output( j ,i ) == 1 && \
            chess.His_output( j ,i + 1) == 1 && \
            chess.His_output( j ,i + 2) == 1) printf("black win!");

            if( chess.His_output( j - 2, i ) == 1  && \
            chess.His_output( j - 1 ,i )  == 1 && \
            chess.His_output( j ,i ) == 1 && \
            chess.His_output( j + 1 ,i ) == 1 && \
            chess.His_output( j + 2 ,i ) == 1) printf("black win!");

            if( chess.His_output( j - 2, i - 2) == 1  && \
            chess.His_output( j - 1,i - 1)  == 1 && \
            chess.His_output( j ,i ) == 1 && \
            chess.His_output( j + 1,i + 1) == 1 && \
            chess.His_output( j + 2,i + 2) == 1) printf("black win!");

            if( chess.His_output( j - 2, i + 2) == 1  && \
            chess.His_output( j - 1 ,i + 1)  == 1 && \
            chess.His_output( j ,i ) == 1 && \
            chess.His_output( j + 1 ,i - 1) == 1 && \
            chess.His_output( j + 2 ,i - 2) == 1) printf("black win!");

//白子连成五子即为获胜
            if( chess.His_output( j , i - 2) == 0  && \
            chess.His_output( j ,i - 1)  == 0 && \
            chess.His_output( j ,i ) == 0 && \
            chess.His_output( j ,i + 1) == 0 && \
            chess.His_output( j ,i + 2) == 0) printf("white win!");

            if( chess.His_output( j - 2, i ) == 0  && \
            chess.His_output( j - 1 ,i )  == 0 && \
            chess.His_output( j ,i ) == 0 && \
            chess.His_output( j + 1 ,i ) == 0 && \
            chess.His_output( j + 2 ,i ) == 0) printf("white win!");

            if( chess.His_output( j - 2, i - 2) == 0  && \
            chess.His_output( j - 1,i - 1)  == 0 && \
            chess.His_output( j ,i ) == 0 && \
            chess.His_output( j + 1,i + 1) == 0 && \
            chess.His_output( j + 2,i + 2) == 0) printf("white win!");

            if( chess.His_output( j - 2, i + 2) == 0  && \
            chess.His_output( j - 1 ,i + 1)  == 0 && \
            chess.His_output( j ,i ) == 0 && \
            chess.His_output( j + 1 ,i - 1) == 0 && \
            chess.His_output( j + 2 ,i - 2) == 0) printf("white win!");


        }
    }


        
    }    


}


