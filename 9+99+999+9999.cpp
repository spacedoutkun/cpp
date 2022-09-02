/********************************************************************************
a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
********************************************************************************/


#include <iostream>
using namespace std;

int main()
{
    int n,b=0,s=0;
    cout<<"Enter N: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        
        b=b*10+9;
        s+=b;
    }
    cout<<endl;
    cout<<s;
    return 0;
  
}
    
    
    
