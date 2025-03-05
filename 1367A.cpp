#include <bits/stdc++.h>

using namespace std;

void decode() {
	string s;
	cin >> s;
	for(int i = 0; i < (int)s.size(); ++i) {
		cout << s[i];
		i++;
	}
	cout << s[(int)s.size()-1];
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}