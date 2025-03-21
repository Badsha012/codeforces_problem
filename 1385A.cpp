#include <bits/stdc++.h>

using namespace std;

void test_case() {
	long long a[4];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	if(a[1] != a[2]) cout << "NO";
	else {
		cout << "YES\n";
		cout << a[0] << " " << a[0] << " " << a[2];
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	return 0;
}