#include <iostream>

using namespace std;

int suma( int a[],int tam)
{
    if(tam==0)
        return 0;
    else
        return a[tam-1]+suma(a,tam-1);
}
int main()
{
    int tam,a[200];
    cout<<"¿Dimension?"<<endl;
    cin>>tam;
    for(int i=0;i<tam;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    cout<<"SUMA=>"<<suma(a,tam);
}
