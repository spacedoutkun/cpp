#include <iostream>
using namespace std;
 int main()
 {
    int a,d,n;
    cout<<"enter a";
    cin>>a;
    for(n=1;n<a;n++)
    {
        int c=0;
      for(d=2;d<=n/2;d++) 
      {
         
         if (n%d==0)
          {
              c++;
              break;
          }
          
      }
      if (c==0)        cout<<n<<endl;  
    }
    return 0;
 }