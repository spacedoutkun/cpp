/******************************************************************************

 a program in C++ to display the pattern using digits with left justified and the highest columns appears in first row in descending order.

5 4 3 2 1                                                              
4 3 2 1                                                                
3 2 1                                                                  
2 1                                                                    
1
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n=5;
    int x=n;
    for(int i=1;i<=n;i++)
    {
        for(int d=x;d>=1;d--)
        {
            cout<<d;
            
        }
        x--;
        
        cout<<endl;
    }
    return 0;
}