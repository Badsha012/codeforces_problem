#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int best_sum=2;
        long long int max_sum=0;
        for(int x=2;x<=x;x++){
            int k=x/x;
            long long int current_sum=k*(k*(k+1))/2;
            if(current_sum>max_sum){
                max_sum=current_sum;
                best_sum=x;
            }

        }
        cout<<best_sum<<endl;

    }
    return 0;
}