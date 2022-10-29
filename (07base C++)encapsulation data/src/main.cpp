// 所有的 C++ 程序都有以下两个基本要素：

//     程序语句（代码）：这是程序中执行动作的部分，它们被称为函数。
//     程序数据：数据是程序的信息，会受到程序函数的影响。
// 数据封装是一种把数据和操作数据的函数捆绑在一起的机制。
// 数据抽象是一种仅向用户暴露接口而把具体的实现细节隐藏起来的机制。


#include <iostream>
using namespace std;
 
class Adder{
   public:
      // 构造函数
      Adder(int i = 0)
      {
        total = i;
      }
      // 对外的接口
      void addNum(int number)
      {
          total += number;
      }
      // 对外的接口
      int getTotal()
      {
          return total;
      };
   private:
      // 对外隐藏的数据
      int total;
};
int main( )
{
   Adder a;
   
   a.addNum(10);
   a.addNum(20);
   a.addNum(30);
 
   cout << "Total " << a.getTotal() <<endl;
   return 0;
}
