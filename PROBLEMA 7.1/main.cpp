#include <iostream>

using namespace std;
int longitud(char *cadena)
{
    int c=0;
    for(;*cadena!='\0';cadena++)
    {
        c++;
    }
    return c;
}
int main()
{
    char *cadena= new char[100];
    cout<<"Ingrese cadena:"<<endl;
    cin>>cadena;
    cout<<"LONGITUD DE CADENA ES=>"<<longitud(cadena);
}
