#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
int n;
int lanzamientos_dardos(int n)
{
    int dardos=0;
    for(int i=0;i<n;++i)
    {
        double x,y;
        srand(time(0));
        x=rand()/(double)RAND_MAX;
        y=rand()/(double)RAND_MAX;
        if(sqrt(x*x+y*y)<1)
        {
            ++dardos;
        }

    }
    return dardos;
}
int main()
{
    cout<<"¿Cuantos dardos desea lanzar?"<<endl;
    cin>>n;
    cout<<"La cantidad de dardos que cayeron dentro del circulo son:"<<lanzamientos_dardos();
}
