// 了解动态内存在 C++ 中是如何工作的是成为一名合格的 C++ 程序员必不可少的。
// C++ 程序中的内存分为两个部分：
//     栈：在函数内部声明的所有变量都将占用栈内存。
//     堆：这是程序中未使用的内存，在程序运行时可用于动态分配内存。
// 即new 和 delete 运算符
// #include <iostream>
 
// using namespace std;

// int main()
// {

// double* pvalue  = NULL;
// if( !(pvalue  = new double ))
// {
//    cout << "Error: out of memory." <<endl;
//    exit(1);
//  //如果自由存储区已被用完，可能无法成功分配内存。本代码用于检查！
//  //与malloc相比，new 不只是分配了内存，它还创建了对象。
// }
// }


// #include <iostream>
// #include <iomanip>
// using namespace std;
 
// int main ()
// {
//    double* pvalue  = NULL; // 初始化为 null 的指针
//    pvalue  = new double;   // 为变量请求内存
 
//    *pvalue = 29494.99;     // 在分配的地址存储值
//    //cout.precision(7);//设置输出浮点数的精度为 n。
//    cout << setprecision(7) << "Value of pvalue : " << *pvalue << endl;
 
//    delete pvalue;         // 释放内存
 
//    return 0;
// }



#include <iostream>
using namespace std;
 
int main()
{
    int **p;   
    int i,j;   //p[4][8] 
    //开始分配4行8列的二维数据   
    p = new int *[4];
    for(i=0;i<4;i++){
        p[i]=new int [8];
    }
 
    for(i=0; i<4; i++){
        for(j=0; j<8; j++){
            p[i][j] = j*i;
        }
    }   
    //打印数据   
    for(i=0; i<4; i++){
        for(j=0; j<8; j++)     
        {   
            if(j==0 && i!=0) cout<<endl;   
            cout<<p[i][j]<<"\t";   
        }
    }   
    //开始释放申请的堆   
    for(i=0; i<4; i++){
        delete [] p[i];   
    }
    delete [] p;   
    return 0;
}



// 对象与简单的数据类型没有什么不同。
// #include <iostream>
// using namespace std;
 
// class Box
// {
//    public:
//       Box() { 
//          cout << "调用构造函数！" <<endl; 
//       }
//       ~Box() { 
//          cout << "调用析构函数！" <<endl; 
//       }
// };
 
// int main( )
// {
//    Box* myBoxArray = new Box[4];
 
//    delete [] myBoxArray; // 删除数组
//    return 0;
// }
