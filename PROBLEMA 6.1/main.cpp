#include <iostream>

using namespace std;
int a[100],tam;
void imprimeArreglo(int a[],int tam)
{
    for(int i=0;i<tam;++i)
    {
        cout<<a[i];
        if(i<tam-1)
        {
            cout<<",";
        }
    }
}
int main()
{
    cout<<"DIMENSION=";
    cin>>tam;
    for(int i=0;i<tam;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    imprimeArreglo(a,tam);
}
