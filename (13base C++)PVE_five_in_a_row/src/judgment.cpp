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


//����������һ�������࣬ÿ��һ����ͽ���Ӧ����ֵ�ĳ�1�����壩,2�����壩��3,4�ֱ�����һ����
//���д��ж�ȡ�����жϣ����� or ʤ��
//Ϊʲôÿ�ζ���ֱ��black win��ȫ�ֱ�����ʹ�ã�






void judgment::judge(void)
{
    //win���Ϊ0������ʤ�����Ϊ1������ʤ
    int j,i;
    chess chess;
    //printf("black win!!!!!  %d",chess.His_output(0,0));
    if(chess.His_output(0,0) == 1) printf("black win!!!!!  %d",chess.His_output(0,0));//ÿ�μ��һ�飡���ӻ�ʤ��

    for (i = 0; i <= SIZE - 1; i++)
    {
        for (j = 0; j <= SIZE - 1; j++)//ÿһ����Ϊ��λ��ֻ��Ҫ���������Ϊ�����Ƿ�����������ӾͿ����ˣ��Ժ���Ϊ��win���Ϊ1
        {
            // if( chess.His_Board[j][i - 2] == 1  && \
            // chess.His_Board[j][i - 1]  == 1 && \
            // chess.His_Board[j][i] == 1 && \
            // chess.His_Board[j][i + 1] == 1 && \
            // chess.His_Board[j][i + 2] == 1) win = 1;//100Ҳ��1����˼�����������ж�

            // if( chess.His_Board[j - 2][i] == 1  && \
            // chess.His_Board[j - 1][i]  == 1 && \
            // chess.His_Board[j][i] == 1 && \
            // chess.His_Board[j + 1][i] == 1 && \
            // chess.His_Board[j + 2][i] == 1) win = 1;//100Ҳ��1����˼�����������ж�

            // if( chess.His_output(0,0) == 1) win = 1;//100Ҳ��1����˼�����������ж�

        }
    }



}