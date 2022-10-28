#include <iostream>
//using namespace std;
// int main(int argc, char *argv[])
// {
// 	std::cout << "Hello world!" << std::endl;
// 	return 0;
// 	//F6可以直接在终端输出结果
// 	//F8可以在小黑窗中查看结果
// }

int addArray(int *array,int n);

int main()
{
	int data[] = {0,1,2,3,4,5,6,7,8,9};//数组名就是一个地址
	int size = sizeof(data) / sizeof(data[0]);
	std::cout << "结果是：" << addArray( data,size) << std::endl;//endl代表回车，在std命名空间
	return 0;
}

int addArray(int *array,int n)
{
	int sum = 0;
	int i;
	//printf("array : %d\n",sizeof(array));//64位的电脑中使用8个字节保存首地址，
	//简单的说32位系统的地址总线是32位的，而64位系统的地址总线是64位的
	for(i = 0;i < n;i++)
	{
		sum += *array++;
	}
	return sum;
}