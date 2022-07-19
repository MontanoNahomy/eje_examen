#include <iostream>
#include <conio.h>

using namespace std;

/*
10/2!  +  11/3!  +  12/4! +......  + num/n!
*/

double p1 (int num)
{
    double m=1;
    for(int i =1; i<=num; i++)
         {
             m*=i;
         }
    return m;
}

int pt (int base, int exponente)
{
     int l=1;
     for (int d =1; d<=exponente; d++)
     {
        l = l* base;
     }
     return l;
}

double s (int n)
{
     double sm= 0;
     for (int d =2; d<=n; d++)
     {
         sm=sm + (p1 (d) / pt (5, d-1));
     }
    return sm;
}

int main ()
{
    cout<<endl<<s(5);
}

