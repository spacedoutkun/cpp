/******************************************************************************

 a program in C++ to display the pattern using digits with left justified and the highest columns appears in first row in descending order.

1                                                                  
21                                                                  
321                                                                  
4321                                                                  
54321
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int d=i;d>=1;d--)
        {
            cout<<d;
            
        }
       cout<<endl;
    }
    return 0;
}