#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
//La función debería tomar un argumento especificando la cantidad de lanzamientos de dardos que se ejecutarán
//CALCULO DE PI
int n;
double calculoPi(int n)
{
    srand(time(0));
    int dardos_Acertados=0;

    for(int i=0;i<n;i++)
    {
        double x=rand()/(double)RAND_MAX;
        double y=rand()/(double)RAND_MAX;
        if(sqrt(x*x+y*y)<1)
        {
            ++dardos_Acertados;
        }
    }
    return dardos_Acertados/static_cast<double>(n)*4;
}

int main()
{
    cout<<"¿Cantidad de dardos?";
    cin>>n;
    cout<<calculoPi(n);
}
