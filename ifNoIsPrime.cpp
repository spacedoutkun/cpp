/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a,c=0;
    
    cout<<"enter a";
    cin>>a;
    for(int d=2;d<a;d++)
    {
        if(a%d==0)
        {
            c++;
           break; 
        }
       
    }
     if(c==0) cout<<"prime";
        else cout<<"not prime";

    return 0;
}
/*input
9
*/