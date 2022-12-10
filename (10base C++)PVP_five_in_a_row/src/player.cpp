/*�����˶�ս�������塪�����󣺰��ӣ����ӣ����̣���ң�ʱ�ӣ�����
���̶��󣺹��캯���н���ȫ����ʼ���������迪ʼ����ֵ
display��д���ڲ��������У�չʾ��ʼ�����̡�֮���ڲ������н��ж�Ӧ��ֵ��ͼ������display��
���������Ӻͺ��ӣ�һ�п�����ʾ�Ķ�������Ԫ��ֵȡ������
�����������ӣ����캯�����Բ�д����������Ϊһ�����ڣ����ֺ����������壬ͬʱ�޸�Ԫ��ֵ����
display����ÿ��ˢ�½��棬ע����Ҫ��¼�ϴ������λ��
��Ҷ�������ÿ����������ֵ������ʵ���³���ԣ����������������룩
���ж��󣺽����Լ���ʤ����
*/

#include <iostream>
#include "../include/player.h"
#include "../include/chessboard.h"
#include "../include/chess.h"
#include "../include/judgment.h"
using namespace std;

#define _CRT_SECURE_NO_WARNINGS
//����������һ�������࣬ÿ��һ����ͽ���Ӧ����ֵ�ĳ�1�����壩,2�����壩��3,4�ֱ�����һ����
//���д��ж�ȡ�����жϣ����� or ʤ��


void player::input(void)
{
    char y;
	int x;
    int j,i;
    //������ʷ����
    chess chess;//ֻ�ܹ���һ�Σ�
    chessboard chessboard;//ֻ�ܹ���һ�Σ�
    //chessboard.InitBoardArray();
    chess.chessInit();
    chessboard.CBdisplay();
    while(1)
    {
        
        scanf("%c%d",&y,&x);  //�����Ļ���������
        getchar();
        chess.His_input(x, y, 0,0);
        chessboard.Board[SIZE-x][y-'A'] = BLACK;	//�ı������Ӧ����ֵ
        // chessboard.Board[1][0] = BLACK;	//�ı������Ӧ����ֵ
        chessboard.CBdisplay();
        chessboard.win();



    //printf("black win!!!!!  %d",chess.His_output(0,0));

    for (i = 0; i <= SIZE - 1; i++)
    {
        for (j = 0; j <= SIZE - 1; j++)//ÿһ����Ϊ��λ��ֻ��Ҫ���������Ϊ�����Ƿ�����������ӾͿ����ˣ��Ժ���Ϊ��win���Ϊ1
        {
//�����������Ӽ�Ϊ��ʤ
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

//�����������Ӽ�Ϊ��ʤ
            if( chess.His_output( j , i - 2) == 2  && \
            chess.His_output( j ,i - 1)  == 2 && \
            chess.His_output( j ,i ) == 2 && \
            chess.His_output( j ,i + 1) == 2 && \
            chess.His_output( j ,i + 2) == 2) printf("white win!");

            if( chess.His_output( j - 2, i ) == 2  && \
            chess.His_output( j - 1 ,i )  == 2 && \
            chess.His_output( j ,i ) == 2 && \
            chess.His_output( j + 1 ,i ) == 2 && \
            chess.His_output( j + 2 ,i ) == 2) printf("white win!");

            if( chess.His_output( j - 2, i - 2) == 2  && \
            chess.His_output( j - 1,i - 1)  == 2 && \
            chess.His_output( j ,i ) == 2 && \
            chess.His_output( j + 1,i + 1) == 2 && \
            chess.His_output( j + 2,i + 2) == 2) printf("white win!");

            if( chess.His_output( j - 2, i + 2) == 2  && \
            chess.His_output( j - 1 ,i + 1)  == 2 && \
            chess.His_output( j ,i ) == 2 && \
            chess.His_output( j + 1 ,i - 1) == 2 && \
            chess.His_output( j + 2 ,i - 2) == 2) printf("white win!");


        }
    }



        scanf("%c%d",&y,&x);
        getchar();
        chess.His_input(x, y, 1,0);
        chessboard.Board[SIZE-x][y-'A'] = WHITE;
        chessboard.CBdisplay();
        chessboard.win();

        // printf(" %d ",chess.His_Board[0][0]);
        // printf("%d\n",chess.His_output(0,0));
        // judgment.judge();
        //if(chess.His_output(0,0) == 1) printf("black win!!!!!");//ÿ�μ��һ�飡���ӻ�ʤ��

    for (i = 0; i <= SIZE - 1; i++)
    {
        for (j = 0; j <= SIZE - 1; j++)//ÿһ����Ϊ��λ��ֻ��Ҫ���������Ϊ�����Ƿ�����������ӾͿ����ˣ��Ժ���Ϊ��win���Ϊ1
        {
//�����������Ӽ�Ϊ��ʤ
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

//�����������Ӽ�Ϊ��ʤ
            if( chess.His_output( j , i - 2) == 2  && \
            chess.His_output( j ,i - 1)  == 2 && \
            chess.His_output( j ,i ) == 2 && \
            chess.His_output( j ,i + 1) == 2 && \
            chess.His_output( j ,i + 2) == 2) printf("white win!");

            if( chess.His_output( j - 2, i ) == 2  && \
            chess.His_output( j - 1 ,i )  == 2 && \
            chess.His_output( j ,i ) == 2 && \
            chess.His_output( j + 1 ,i ) == 2 && \
            chess.His_output( j + 2 ,i ) == 2) printf("white win!");

            if( chess.His_output( j - 2, i - 2) == 2  && \
            chess.His_output( j - 1,i - 1)  == 2 && \
            chess.His_output( j ,i ) == 2 && \
            chess.His_output( j + 1,i + 1) == 2 && \
            chess.His_output( j + 2,i + 2) == 2) printf("white win!");

            if( chess.His_output( j - 2, i + 2) == 2  && \
            chess.His_output( j - 1 ,i + 1)  == 2 && \
            chess.His_output( j ,i ) == 2 && \
            chess.His_output( j + 1 ,i - 1) == 2 && \
            chess.His_output( j + 2 ,i - 2) == 2) printf("white win!");


        }
    }


        
    }    


}


