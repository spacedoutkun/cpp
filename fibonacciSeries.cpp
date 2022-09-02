/******************************************************************************

a program in C++ to display the first n terms of Fibonacci series.

*******************************************************************************/
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n=10;

    int g=0;
    int o=0,p=1;
    cout<<o<<" "<<p<<" ";
    for(int i=3;i<=n;i++)
    {
        g=o+p;
        cout<<g<<" ";
        o=p;
        p=g;
        
    }
    g=0;
    return 0;
}
