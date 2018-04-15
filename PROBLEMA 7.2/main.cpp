#include <iostream>

using namespace std;
int x,y;
void intercambio(int &x,int &y)
{
    int var=x;
    x=y;
    y=var;
}

int main()
{
    cout<<"Ingrese dos numeros:"<<endl;
    cin>>x>>y;
    intercambio(x,y);
    cout<<"El intercambio es:"<<x<<"-"<<y;
}
