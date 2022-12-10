#include <iostream>
using namespace std;

int add(int *la,int lb)
{
    *la = *la + lb ;
    return *la;
}
int main()
{
    int a = 3;
    int b = 4;
    int* ip = &a;
    
    printf("%d",add( ip , b));
    
}
