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
      virtual int area()//��һ��virtual������������ָ������ݣ��������������ͣ�ȡ����̬����
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
      //��̬�����壺���˶�̬���������ж����ͬ���࣬������ͬһ�����Ƶ����в�ͬʵ�ֵĺ���
      //�����Ĳ���������������ͬ�ġ�
      //virtual int area() = 0;���麯�������߱�����������û�����壬������麯���Ǵ��麯����
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
      Triangle( int a=0, int b=0):Shape(a, b)//���๹�캯�����ø���Ĺ��캯��
      {

      }
      int area ()
      { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};
// �����������
int main( )
{
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);
 
   // �洢���εĵ�ַ
   shape = &rec;
   // ���þ��ε���������� area
   shape->area();//����ָ����Եĳ�Ա�������ã�
 
   // �洢�����εĵ�ַ
   shape = &tri;
   // ���������ε���������� area
   shape->area();
   
   return 0;
}