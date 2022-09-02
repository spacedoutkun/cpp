#include <iostream>
using namespace std;

int main()
{
    int n,m,g;
    cin>>n>>m;
    
    
    for (int a=1;a<=n && a<=m;a++)
    {
        if (n%a==0 && m%a==0) g=a;
        
    }
    cout<<g<<endl;
}