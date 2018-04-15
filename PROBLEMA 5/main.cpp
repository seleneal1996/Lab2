#include <iostream>
#include <time.h>
#include<stdlib.h>
using namespace std;

int main()
{
   double x,y;
   srand(time(0));
   x=(rand()%100+1)/1000.0;
   y=(rand()%100+1)/1000.0;
   cout<<"("<<x<<";"<<y<<")"<<endl;
}
