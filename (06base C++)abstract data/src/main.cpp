// 数据抽象：只向外界提供关键信息，并隐藏其后台的实现细节
// 即只表现必要的信息而不呈现细节。
// 数据抽象是一种依赖于接口和实现分离的编程（设计）技术。
// 在 C++ 中，我们使用类来定义我们自己的抽象数据类型（ADT）。
// 您可以使用类 iostream 的 cout 对象来输出数据到标准输出，如下所示：

// #include <iostream>//iostream其实就是一个私有成员的类，我们只能调用但不能修改
// using namespace std;
 
// int main( )
// {
//    cout << "Hello C++" <<endl;
//    return 0;
// }
//在这里，您不需要理解 cout 是如何在用户的屏幕上显示文本。
//您只需要知道公共接口即可，cout 的底层实现可以自由改变。


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
      // 对外的接口,用户需要知道它们以便使用类
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
