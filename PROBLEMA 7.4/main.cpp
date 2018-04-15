#include <iostream>

using namespace std;
//INTERCAMBIO DE PUNTEROS
int x,y;
void intercambio(int **x,int **y)
{
    int *var=*x;
    *x=*y;
    *y=var;
}
int main()
{
    x=5,y=6;
    int *ptr1=&x;
    int *ptr2=&y;
    intercambio(&ptr1,&ptr2);
    cout<<*ptr1<<"  "<<*ptr2;
}
