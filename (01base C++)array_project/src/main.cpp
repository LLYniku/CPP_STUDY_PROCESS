#include <iostream>
//using namespace std;
// int main(int argc, char *argv[])
// {
// 	std::cout << "Hello world!" << std::endl;
// 	return 0;
// 	//F6����ֱ�����ն�������
// 	//F8������С�ڴ��в鿴���
// }

int addArray(int *array,int n);

int main()
{
	int data[] = {0,1,2,3,4,5,6,7,8,9};//����������һ����ַ
	int size = sizeof(data) / sizeof(data[0]);
	std::cout << "����ǣ�" << addArray( data,size) << std::endl;//endl����س�����std�����ռ�
	return 0;
}

int addArray(int *array,int n)
{
	int sum = 0;
	int i;
	//printf("array : %d\n",sizeof(array));//64λ�ĵ�����ʹ��8���ֽڱ����׵�ַ��
	//�򵥵�˵32λϵͳ�ĵ�ַ������32λ�ģ���64λϵͳ�ĵ�ַ������64λ��
	for(i = 0;i < n;i++)
	{
		sum += *array++;
	}
	return sum;
}