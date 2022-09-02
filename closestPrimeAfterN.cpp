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
    int num,ctr=0;
    cout<<"enter num";
    cin>>num;
    for(int n =num-1;n>=1;n--)
    {
        for(int m=2;m<n;m++)
        {
           if (n % m==0)
                ctr++;
             
        }
        if(ctr==0)
        {
            if (n==1)
            {
                cout<<"no prime below 1"<<"/n";
                break;
            }
            cout<<n<<"\n";
            break;
        }
        ctr=0;
    }
    

    return 0;
}