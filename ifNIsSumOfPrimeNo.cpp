/******************************************************************************

a program in C++ to Check Whether a Number can be Express as Sum of Two Prime Numbers.

*******************************************************************************/
#include <iostream>
#include <climits>

using namespace std;

int main()
{   int n=20,i,j,c=0,d=0,e=0;
    for(int i=2;i<=n/2;i++)
    {
        c=0;
        d=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
                j=i;
            }
        }
        for(int j=2;j<n-i;j++)
        {
            if((n-i)%j==0)
            {
                d++;
                j=n-i;
            }
        }
        if (c==0 && d==0)
        {
           cout<<i<<"+"<<n-i<<endl;
           e++;
        }
       
    
    }
      if (e<1)
        {
            cout<<"cant be expressed";
        }
    return 0;
}
