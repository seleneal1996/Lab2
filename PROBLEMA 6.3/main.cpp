#include <iostream>

using namespace std;
int M[100][100],filas,columna;
void transpuestra(int filas,int columna)
{
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columna;j++)
        {
            cout<<"     "<<M[j][i];
        }
        cout<<"\n";
    }
}

int main()
{
    cout<<"¿Filas?"<<endl;
    cin>>filas;
    cout<<"¿Columnas?"<<endl;
    cin>>columna;
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columna;j++)
        {
            cout<<"M["<<i<<"]"<<"["<<j<<"]=";
            cin>>M[i][j];
        }
    }
    cout<<"SU MATRIZ ES:"<<endl;
    for(int i=0;i<filas;i++)
    {
        for(int j=0;j<columna;j++)
        {
            cout<<"    "<<M[i][j];
        }
        cout<<"\n";
    }
    cout<<"LA MATRIZ TRANSPUESTA ES:"<<endl;
    transpuestra(filas,columna);
}
