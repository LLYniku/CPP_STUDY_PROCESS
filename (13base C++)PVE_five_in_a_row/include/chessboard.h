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
    chessboard();         //¹¹Ôìº¯Êý
    void CBdisplay(void);
    int Board[SIZE][SIZE];
    void win(void);
    int black;
    int white;
};

#endif
