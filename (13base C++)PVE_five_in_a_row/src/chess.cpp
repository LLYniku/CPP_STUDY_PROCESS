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


int His_Board[SIZE][SIZE];//��Ҫ����ȫ������

//����������һ�������࣬ÿ��һ����ͽ���Ӧ����ֵ�ĳ�0�����壩,1�����壩��2,3�ֱ�����һ����,his���̳�ʼֵΪ100
//���д��ж�ȡ�����жϣ����� or ʤ��

void chess::chessInit(void)//���������ʱ����г�ʼ�������������е�ֵ����100
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
    if(His_output( j , i ) != 1 && His_output( j ,i ) != 0)//��λ��û�����ӣ�����valueֵ
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
        //���� 
    }
    else{//P����Ϊ0���ʹ���û�л���;  k == 2���壬k == 1����
        if(k == 0){
            His_Board[SIZE-x][y-'A'] = 1;//����
        }
        else{
            His_Board[SIZE-x][y-'A'] = 0;//����
        }

    }

    judgment.judge();

}
