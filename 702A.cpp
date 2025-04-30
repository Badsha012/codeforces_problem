#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int r=1;
    int c=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            c++;
        }else{
            r=max(r,c);
            c=1;
        }

    }
    r=max(r,c);
    cout << r <<endl;

}