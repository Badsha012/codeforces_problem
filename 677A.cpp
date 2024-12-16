// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a,b,c=0,d=0;
    cin>>a>>b;
    int arr[a];
   // cin>>a>>b;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        if(arr[i]<=b){
            c++;
        }
        else{
            d=d+2;
            
        }
    }
 cout<<c+d<<endl;
  
    return 0;
}