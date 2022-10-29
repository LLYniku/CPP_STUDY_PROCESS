// �ӿ������������Ϊ�͹��ܣ�������Ҫ�������ض�ʵ�֡�
// �������������һ������������Ϊ���麯�������������ǳ����ࡣ
// ��Ƴ����ࣨͨ����Ϊ ABC����Ŀ�ģ���Ϊ�˸��������ṩһ�����Լ̳е��ʵ��Ļ��ࡣ
// �����಻�ܱ�����ʵ����������ֻ����Ϊ�ӿ�ʹ�á�

// ��������ϵͳ���ܻ�ʹ��һ���������Ϊ���е��ⲿӦ�ó����ṩһ���ʵ��ġ�ͨ�õġ���׼���Ľӿڡ�
// Ȼ��������ͨ���̳г�����࣬�Ͱ��������ƵĲ������̳�������
// �ⲿӦ�ó����ṩ�Ĺ��ܣ������к������ڳ�����������Դ��麯������ʽ���ڵġ�
// ��Щ���麯������Ӧ���������б�ʵ�֡�
#include <iostream>
 
using namespace std;
 
// ����
class Shape 
{
public:
   // �ṩ�ӿڿ�ܵĴ��麯��
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
 
// ������
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
   // �����������
   cout << "Total Rectangle area: " << Rect.getArea() << endl;
 
   Tri.setWidth(5);
   Tri.setHeight(7);
   // �����������
   cout << "Total Triangle area: " << Tri.getArea() << endl; 
 
   return 0;
}
