/*�����˶�ս�������塪�����󣺰��ӣ����ӣ����̣���ң�ʱ�ӣ�����
���̶��󣺹��캯���н���ȫ����ʼ���������迪ʼ����ֵ
display��д���ڲ��������У�չʾ��ʼ�����̡�֮���ڲ������н��ж�Ӧ��ֵ��ͼ������display��
���������Ӻͺ��ӣ�һ�п�����ʾ�Ķ�������Ԫ��ֵȡ������
�����������ӣ����캯�����Բ�д����������Ϊһ�����ڣ����ֺ����������壬ͬʱ�޸�Ԫ��ֵ����
display����ÿ��ˢ�½��棬ע����Ҫ��¼�ϴ������λ��
��Ҷ�������ÿ����������ֵ������ʵ���³���ԣ����������������룩
���ж��󣺽����Լ���ʤ����
*/

/*���˻���ս��
����ʱ�Ӷ��󣬼����Ƕ��ǣ�����ÿ����������ĵ��Ȩ�أ�ע���Ѿ��¹��Ĳ���ʹ�ã�
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
        scanf("%c%d",&y,&x);  //�����Ļ���������
        getchar();
        
        chessboard.Board[SIZE-x][y-'a'] = BLACK;	//�ı������Ӧ����ֵ
        chessboard.CBdisplay();

        scanf("%c%d",&y,&x);
        getchar();
        
        chessboard.Board[SIZE-x][y-'a'] = WHITE;
        chessboard.CBdisplay();
    }
    // system("pause");
}
