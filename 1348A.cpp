#include <bits/stdc++.h>
using namespace std;

void decode(){
  int n;
  cin >> n;
  int s = (1 << n);
  for(int i = 1; i < n/2; i++){
    s += (1 << i);
  }
  int s2 = 0;
  for(int i = n/2; i < n; i++){
    s2 += (1 << i);
  }
  cout << s-s2 << "\n";
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--){
    decode();
  }
}