/******************************************************************************

a program in C++ to display the number in reverse order.

*******************************************************************************/
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n=12345;
    int r=0;
    /*int s=0;*/
    for(int i=n;n!=0;n=n/10)
    {
       r=n%10;
       cout<<r;
       /* or it can de done like this
       s=s*10+r;
       */
    }
    /* cout<<s;*/
    return 0;
}
