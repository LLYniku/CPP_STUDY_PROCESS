#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      int width, height;
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      virtual int area()//加一个virtual编译器看的是指针的内容，而不是它的类型！取消静态链接
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
      //多态的意义：有了多态，您可以有多个不同的类，都带有同一个名称但具有不同实现的函数
      //函数的参数甚至可以是相同的。
      //virtual int area() = 0;纯虚函数：告诉编译器，函数没有主体，上面的虚函数是纯虚函数。
};
class Rectangle: public Shape{
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) 
      {

      }
      int area ()
      { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b)//子类构造函数调用父类的构造函数
      {

      }
      int area ()
      { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};
// 程序的主函数
int main( )
{
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);
 
   // 存储矩形的地址
   shape = &rec;
   // 调用矩形的求面积函数 area
   shape->area();//对于指针而言的成员函数调用！
 
   // 存储三角形的地址
   shape = &tri;
   // 调用三角形的求面积函数 area
   shape->area();
   
   return 0;
}
