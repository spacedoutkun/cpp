/********************************************************************************
a program in C++ to display the n terms of odd natural number and their sum

********************************************************************************/


#include <iostream>
using namespace std;

int main()
{
    int n,sum=0,c=0;
    cout<<"Enter N: ";
    cin>>n;
    for (int i=1;i<=10;i++)
    {
        
       if (i%2!=0)
       {
           c++;
           while(c<n)
           {
               cout<<i<<"\n";
               sum+=i;
            
               break;
           }   
           
        }
        c=0;
        
       
    }
       cout<<"sum"<<sum<<endl;
    return 0;
  
}
    
    
    
