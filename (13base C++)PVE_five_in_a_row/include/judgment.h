#ifndef JUDGMENT_H
#define JUDGMENT_H
#include <iostream>
using namespace std;

#define SIZE 15
#define BLACKtem 10
#define WHITEtem 11
#define BLACK 20
#define WHITE 21


//20221209晚不需要管其他的值只需要管0和1就可以了
class judgment
{
private:
    int i;
    int j;
    int upside;
    int downside;
    
public:
    //chess();         //构造函数
    // void His_input(void); //用来调用His_Board，必须要有接口
    void judge(void);
    
};

#endif