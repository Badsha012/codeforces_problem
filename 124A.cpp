//the_number_of_positions
//problem_124A codeforces

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, a, b;
	cin >> n >> a >> b;
	int r=n-max(a+1,n-b)+1;
	
	cout << r << endl;
	
	return 0;
}++++++++++++++