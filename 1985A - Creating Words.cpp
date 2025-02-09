
#include <iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
  
    
    for(int i=0;i<t;i++){
        string a,b;
        cin>>a>>b;
        char temp=a[0];
        a[0]=b[0];
        b[0]=temp;
        
    
    cout<<a<<" "<<b<<endl;
    }
   
   

    return 0;
}