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
    int n,m,c=0,x,y;
    cin>>n>>m;
    x=(n<m)?n:m;
    y=(n>m)?n:m;
    for(int i=x;i<=y;i++)
    {
        
        for(int j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
       
        if (i==1)
        {
             cout<<"Prime Numbers are:"<<"\n";
            cout<<1<<"\n";
        }
        if(c==1)
        {
            cout<<i<<"\n";
        }
        c=0;
        
    }
    
    

 
    
    return 0;
    
}