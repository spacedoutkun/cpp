/******************************************************************************

a program in C++ to print a pattern like highest numbers of columns appear in first row.
12345                                                                                                         
2345                                                                                                          
345                                                                                                           
45                                                                                                            
5

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n=5;

    for(int i=1;i<=n;i++)
    {
        
        for(int j=i;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}