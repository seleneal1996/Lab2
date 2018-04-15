#include <iostream>

using namespace std;

int suma(int a,int b,int c=0,int d=0)
{
    return a+b+c+d;
}
int main()
{
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cout<<suma(a,b,c,d);
}
