#ifndef JUDGMENT_H
#define JUDGMENT_H
#include <iostream>
using namespace std;

#define SIZE 15
#define BLACKtem 10
#define WHITEtem 11
#define BLACK 20
#define WHITE 21


//20221209����Ҫ��������ֵֻ��Ҫ��0��1�Ϳ�����
class judgment
{
private:
    int i;
    int j;
    int upside;
    int downside;
    
public:
    //chess();         //���캯��
    // void His_input(void); //��������His_Board������Ҫ�нӿ�
    void judge(void);
    
};

#endif