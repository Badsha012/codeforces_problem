#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b,c,d=0,x;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>a>>b>>c;
        if(a+b+c >=2){
            d++;
        }
    }
    cout<<d<<endl;
}