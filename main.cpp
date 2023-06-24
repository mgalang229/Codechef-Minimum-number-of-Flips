#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	if (n % 2 == 1) {
		cout << "-1\n";
		return;
	}
	int positive = 0;
	for (int& x : a)
		positive += (x == 1);
	int negative = n - positive;
	int half = n / 2;
	cout << min(abs(half - positive), abs(half - negative)) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--)
		solve();
}
