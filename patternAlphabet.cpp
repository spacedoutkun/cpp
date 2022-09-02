/******************************************************************************

 a program in C++ to display the pattern like pyramid using the alphabet.
 
        A                                                              
      A B A                                                            
    A B C B A                                                          
  A B C D C B A                                                        
A B C D E D C B A
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n=5;
   
    
    for(int i=1;i<=n;i++)
    {
         char x='A';
         char y;
    
        for(int j=i;j<=n;j++)
        {
            cout<<" ";
            
        }
        for(int j=1;j<=i;j++,x++)
        {
            cout<<x;  
            y=x; 
        }
        for(int j=1;j<i;j++)
        {
            y--;
            cout<<y;
        }
       cout<<endl;
    }
    return 0;
}