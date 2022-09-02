#include <iostream>  
#include<bits/stdc++.h>
using namespace std;  
int main()  
{   int n=36;
    int r=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if (n%i==0) 
        {
            if (i==(n/i))
            {
                r+=i;
            }
            else 
            {
                r+=i+(n/i);
            }
            
            cout<<"factor="<<i<<endl;
        }
        
    }
    cout<<"sum of factors="<<r;
    
   
    return 0;  
}  