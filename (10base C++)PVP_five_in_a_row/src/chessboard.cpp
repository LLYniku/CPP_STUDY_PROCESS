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
#include "../include/chessboard.h"
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
    upside = 6;
    cout<<"llyniubi!" << endl;
}

void chessboard::CBdisplay(void)
{
    if(upside == 6)
    {
        cout<<"llyniubi!" << endl;
    }
}
// chessboard::~chessboard()
// {
// }
