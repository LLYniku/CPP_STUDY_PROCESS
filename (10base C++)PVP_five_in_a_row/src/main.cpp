// �˽⶯̬�ڴ��� C++ ������ι������ǳ�Ϊһ���ϸ�� C++ ����Ա�ز����ٵġ�
// C++ �����е��ڴ��Ϊ�������֣�
//     ջ���ں����ڲ����������б�������ռ��ջ�ڴ档
//     �ѣ����ǳ�����δʹ�õ��ڴ棬�ڳ�������ʱ�����ڶ�̬�����ڴ档
// ��new �� delete �����
// #include <iostream>
 
// using namespace std;

// int main()
// {

// double* pvalue  = NULL;
// if( !(pvalue  = new double ))
// {
//    cout << "Error: out of memory." <<endl;
//    exit(1);
//  //������ɴ洢���ѱ����꣬�����޷��ɹ������ڴ档���������ڼ�飡
//  //��malloc��ȣ�new ��ֻ�Ƿ������ڴ棬���������˶���
// }
// }


// #include <iostream>
// #include <iomanip>
// using namespace std;
 
// int main ()
// {
//    double* pvalue  = NULL; // ��ʼ��Ϊ null ��ָ��
//    pvalue  = new double;   // Ϊ���������ڴ�
 
//    *pvalue = 29494.99;     // �ڷ���ĵ�ַ�洢ֵ
//    //cout.precision(7);//��������������ľ���Ϊ n��
//    cout << setprecision(7) << "Value of pvalue : " << *pvalue << endl;
 
//    delete pvalue;         // �ͷ��ڴ�
 
//    return 0;
// }



#include <iostream>
using namespace std;
 
int main()
{
    int **p;   
    int i,j;   //p[4][8] 
    //��ʼ����4��8�еĶ�ά����   
    p = new int *[4];
    for(i=0;i<4;i++){
        p[i]=new int [8];
    }
 
    for(i=0; i<4; i++){
        for(j=0; j<8; j++){
            p[i][j] = j*i;
        }
    }   
    //��ӡ����   
    for(i=0; i<4; i++){
        for(j=0; j<8; j++)     
        {   
            if(j==0 && i!=0) cout<<endl;   
            cout<<p[i][j]<<"\t";   
        }
    }   
    //��ʼ�ͷ�����Ķ�   
    for(i=0; i<4; i++){
        delete [] p[i];   
    }
    delete [] p;   
    return 0;
}



// ������򵥵���������û��ʲô��ͬ��
// #include <iostream>
// using namespace std;
 
// class Box
// {
//    public:
//       Box() { 
//          cout << "���ù��캯����" <<endl; 
//       }
//       ~Box() { 
//          cout << "��������������" <<endl; 
//       }
// };
 
// int main( )
// {
//    Box* myBoxArray = new Box[4];
 
//    delete [] myBoxArray; // ɾ������
//    return 0;
// }
