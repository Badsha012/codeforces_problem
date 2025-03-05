#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int f[m];
	for (int i = 0; i < m; i++) {
		cin >> f[i];
	}
	sort(f, f + m);
	int ans = INT_MAX;
	// 5 7 10 10 12 22
	// 0 1  2  3  4  5
	for (int i = 0; i < (m - n) + 1; i++) {
		ans = min(ans, f[i + n - 1] - f[i]);
	}
	cout << ans << '\n';
	return 0;
}