/******************************************************************************

a program in C++ to find the first and last digit of a number.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{   int n=5679,r,q,x;
    q=n;
    r=n%10;
    cout<<"Last digit :"<<r<<endl;
    for(q=n;q>=10;q=q/10)
    {
            x=q;
    }
    cout<<"First digit :"<<q<<endl;
    return 0;
}
