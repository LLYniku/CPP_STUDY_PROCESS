// ���е� C++ ������������������Ҫ�أ�

//     ������䣨���룩�����ǳ�����ִ�ж����Ĳ��֣����Ǳ���Ϊ������
//     �������ݣ������ǳ������Ϣ�����ܵ���������Ӱ�졣
// ���ݷ�װ��һ�ְ����ݺͲ������ݵĺ���������һ��Ļ��ơ�
// ���ݳ�����һ�ֽ����û���¶�ӿڶ��Ѿ����ʵ��ϸ�����������Ļ��ơ�


#include <iostream>
using namespace std;
 
class Adder{
   public:
      // ���캯��
      Adder(int i = 0)
      {
        total = i;
      }
      // ����Ľӿ�
      void addNum(int number)
      {
          total += number;
      }
      // ����Ľӿ�
      int getTotal()
      {
          return total;
      };
   private:
      // �������ص�����
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
