/******************************************************************************

a program in C++ to find out the sum of an A.P. series. (has some common diff,starting from some no "n", with some "x" terms)

*******************************************************************************/
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int x=INT_MAX;
    int r=0;
    int c=0,cd,st,no; 
    cout<<"starting no: ";
    cin>>st;
    cout<<"no of terms :";
    cin>>no;
    cout<<"common diff: "<<endl;
    cin>>cd;
    for(int i=st;i<=x;i+=cd)
    {
     c++;
        if(c<no)
        {
            cout<<i<<"+";
            r+=i;
             
           
        }
        else if (c==no)
        {
            cout<<i;
             r+=i;
        }
        else
        {
            break;
        }
        
    }
    cout<<endl;
     cout<<r<<endl;

    return 0;
}
