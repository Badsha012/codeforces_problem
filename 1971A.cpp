#include <iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        int l=min(x,y);
        int r=max(x,y);
        cout<<l<<" "<<r<<endl;

       
    }
}
