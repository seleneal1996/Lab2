#include <iostream>
#include<stdlib.h>
using namespace std;
int nElementos,*elemento;
void invertir(int elemento[],int nElementos)
{
    for(int i=nElementos-1;i>=0;i--)
    {
        cout<<*(elemento+i)<<"  ";
    }
}
int main()
{
    cout<<"¿Numero Elementos?";
    cin>>nElementos;
    elemento= new int[nElementos];
    for(int i=0;i<nElementos;i++)
    {
        cout<<"Numero["<<i<<"]:";
        cin>>*(elemento+i);
    }
    cout<<"EL ARREGLO INGRESADO ES:"<<endl;
    for(int i=0;i<nElementos;i++)
    {
        cout<<*(elemento+i)<<"  ";
    }
    cout<<"\nEL ARREGLO INVERTIDO ES:"<<endl;
    invertir(elemento,nElementos);
}
