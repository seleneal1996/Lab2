#include <iostream>

using namespace std;
int suma( int a[],int tam)
{
   for(int k=0;k<tam;k++)
    {
        return a[tam-1]+suma(a,tam-1);
    }
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
