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


	
	system("cls");   //����



	for(j = 0,line = 15; j <= SIZE - 1; j++)
	{
		printf("%2d",line);
		line -= 1;
		for(i = 0; i <= SIZE - 1; i++)
		{
			switch(Board[j][i])
			{
			case 1:
				printf(" �� ");
				break;
				
			case 2:
				printf(" �� ");
				break;
				
			case 3:
				printf(" �� ");
				break;
				
			case 4:
				printf(" �� ");
				break;
				
			case 5:
				printf(" �� ");
				break;
				
			case 6:
				printf(" �� ");
				break;
				
			case 7:
				printf(" �� ");
				break;
				
			case 8:
				printf(" �� ");
				break;
				
			case 9:
				printf(" �� ");
				break;
				
			case BLACKtem:      // ������һ��
				printf(" �� ");
				break;
				
			case WHITEtem:      //������һ��
				printf(" �� ");
				break;
				
			case BLACK:      //����ͨ��
				printf(" ��");
				break;
				
			case WHITE:
				printf(" ��");  //����ͨ��
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

        //win���Ϊ0������ʤ�����Ϊ1������ʤ
    int j,i;
    chess chess;
    //printf("black win!!!!!  %d",chess.His_output(0,0));
    if(chess.His_output(0,0) == 1) printf("black win!!!!! NIUBI %d",chess.His_output(0,0));//ÿ�μ��һ�飡���ӻ�ʤ��

    for (i = 0; i <= SIZE - 1; i++)
    {
        for (j = 0; j <= SIZE - 1; j++)//ÿһ����Ϊ��λ��ֻ��Ҫ���������Ϊ�����Ƿ�����������ӾͿ����ˣ��Ժ���Ϊ��win���Ϊ1
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