#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include <iostream>
using namespace std;

#define SIZE 15
#define BLACKtem 10
#define WHITEtem 11
#define BLACK 20
#define WHITE 21


class chessboard
{
private:
    int upside;
    int downside;
    
public:
    chessboard();         //���캯��
    void CBdisplay(void);
    void InitBoardArray(void);//��ʼ�������� 
    int Board[SIZE][SIZE];
};

#endif
