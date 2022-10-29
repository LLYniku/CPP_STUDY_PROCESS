// 接口描述了类的行为和功能，而不需要完成类的特定实现。
// 如果类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类。
// 设计抽象类（通常称为 ABC）的目的，是为了给其他类提供一个可以继承的适当的基类。
// 抽象类不能被用于实例化对象，它只能作为接口使用。

// 面向对象的系统可能会使用一个抽象基类为所有的外部应用程序提供一个适当的、通用的、标准化的接口。
// 然后，派生类通过继承抽象基类，就把所有类似的操作都继承下来。
// 外部应用程序提供的功能（即公有函数）在抽象基类中是以纯虚函数的形式存在的。
// 这些纯虚函数在相应的派生类中被实现。
#include <iostream>
 
using namespace std;
 
// 基类
class Shape 
{
public:
   // 提供接口框架的纯虚函数
   virtual int getArea() = 0;
   void setWidth(int w)
   {
      width = w;
   }
   void setHeight(int h)
   {
      height = h;
   }
protected:
   int width;
   int height;
};
 
// 派生类
class Rectangle: public Shape
{
public:
   int getArea()
   { 
      return (width * height); 
   }
};
class Triangle: public Shape
{
public:
   int getArea()
   { 
      return (width * height)/2; 
   }
};
 
int main(void)
{
   Rectangle Rect;
   Triangle  Tri;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   // 输出对象的面积
   cout << "Total Rectangle area: " << Rect.getArea() << endl;
 
   Tri.setWidth(5);
   Tri.setHeight(7);
   // 输出对象的面积
   cout << "Total Triangle area: " << Tri.getArea() << endl; 
 
   return 0;
}
