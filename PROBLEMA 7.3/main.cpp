#include <iostream>

using namespace std;
int x,y;
void intercambia(int *x,int *y)
{
    int var=*x;
    *x=*y;
    *y=var;
}
int main()
{
    cout<<"Numero1-Numero2"<<endl;
    cin>>x>>y;
    intercambia(&x,&y);
    cout<<x<<"-"<<y;
}
