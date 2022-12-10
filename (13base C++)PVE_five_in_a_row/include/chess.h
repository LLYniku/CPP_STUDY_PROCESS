#ifndef CHESS_H
#define CHESS_H
#include <iostream>
using namespace std;

#define SIZE 15
#define BLACKtem 10
#define WHITEtem 11
#define BLACK 20
#define WHITE 21




class chess
{
private:
    int upside;
    int downside;
    
public:
    void chessInit(void);        //构造函数的作用：思考为什么不能用构造函数
    // void His_input(void); //用来调用His_Board，必须要有接口
    void His_input(int x,char y,int k,int p);
    int His_Board[SIZE][SIZE];
    int Value_Board[SIZE][SIZE];
    int His_output(int x,int y);
    void Val_input(int x,int y);
    int Val_output(int x,int y);
};

#endif