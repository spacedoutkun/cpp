/********************************************************************************
a program in C++ to display the n terms of harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
********************************************************************************/


#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum=0.0;
    cout<<"Enter N: ";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        
        if (i<n)
        {
            cout<<"1/"<<i<<"+";
            sum+=1/float(i);
        }
        if (i==n)
        {
            cout<<"1/"<<i;
            sum+=1/float(i);
        }   
        
  
    }
    cout<<endl;
    cout<<"sum of "<<n<<" terms: "<<sum<<endl;
    return 0;
  
}
    
    
    
