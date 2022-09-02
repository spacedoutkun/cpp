/******************************************************************************

a program in C++ of pattern.
       1                                                               
      2 3                                                              
     4 5 6                                                             
    7 8 9 10

*******************************************************************************/
#include <iostream>
#include <climits>

using namespace std;

int main()
{   int n=4;
    int x=1;
    for(int i=1;i<=n;i++)
    {
       for(int j=i;j<=n;j++)
       {
           cout<<" ";
       }
        for(int j=1;j<=i;j++,x++)
       {
           cout<<x<<" ";
       }
       cout<<endl;
        
    }
      
    return 0;
}
