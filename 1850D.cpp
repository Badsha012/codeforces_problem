#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        sort(a.begin(),a.end());
        int max_length=1;
        int current_length=1;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=k){
                current_length++;

            }else{
                max_length=max(max_length,current_length);
                current_length=1;
            }
        }
        max_length=max(max_length,current_length);
        int min_r=n-max_length;
        cout<<min_r<<endl;
    }
    return 0;
}