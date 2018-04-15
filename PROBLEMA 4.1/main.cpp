#include <iostream>

using namespace std;
int suma(int a=9,int b=10)
{
    int s=a+b;
    return s;
}
double suma2(double a=20.42,double b=36.37)
{
    double s=a+b;
    return s;
}
int main()
{
    cout<<"1).La suma es:"<<suma()<<endl;
    cout<<"2).La suma es:"<<suma2()<<endl;
}
