/******************************************************************************

a program in C++ to display Pascal's triangle like pyramid.

3C2=3*2/1*2    (used to find element at somr row and column)
x=i-1
y=j-1
c=i*x/y*j

if 4C3 then 4*3*2/1*2*3

    1                                                                                                         
   232                                                                                                        
  34543                                                                                                       
 4567654                                                                                                      
567898765
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n=5,c=1;
    for(int i=0;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            
            if(j==0 || i==0)
            {
                cout<<1<<" ";
            }
            else
            {
                c=c*(i-j+1)/j;
                cout<<c<<" ";
                
            }
        }
        cout<<endl;
    }
    return 0;
}