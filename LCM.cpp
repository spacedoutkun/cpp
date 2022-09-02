#include <iostream>
using namespace std;

int main()
{
    int n,m,l;
    cin>>n>>m;
    int y;
    y=(n>m)?n:m;
    for (int a=1;a<=y;a++,y++)
    {
        if (y%n==0 && y%m==0) 
        {
            cout<<y<<endl;
            break;
        }
    }
    
}