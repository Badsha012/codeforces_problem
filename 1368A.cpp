// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        int p=0;
        while(a<=c &&  b<=c){
           if(a<b){
               a+=b;
           }
           else{
               b+=a;
           }
           p++;
        }
        cout<<p<<endl;
        
    }


    return 0;
}