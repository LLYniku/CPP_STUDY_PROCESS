// ���ݳ���ֻ������ṩ�ؼ���Ϣ�����������̨��ʵ��ϸ��
// ��ֻ���ֱ�Ҫ����Ϣ��������ϸ�ڡ�
// ���ݳ�����һ�������ڽӿں�ʵ�ַ���ı�̣���ƣ�������
// �� C++ �У�����ʹ���������������Լ��ĳ����������ͣ�ADT����
// ������ʹ���� iostream �� cout ������������ݵ���׼�����������ʾ��

// #include <iostream>//iostream��ʵ����һ��˽�г�Ա���࣬����ֻ�ܵ��õ������޸�
// using namespace std;
 
// int main( )
// {
//    cout << "Hello C++" <<endl;
//    return 0;
// }
//�����������Ҫ��� cout ��������û�����Ļ����ʾ�ı���
//��ֻ��Ҫ֪�������ӿڼ��ɣ�cout �ĵײ�ʵ�ֿ������ɸı䡣


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
      // ����Ľӿ�,�û���Ҫ֪�������Ա�ʹ����
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
