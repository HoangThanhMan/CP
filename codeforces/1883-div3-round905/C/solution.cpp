#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, k; cin >> n >> k;
	int* a = new int[n];
	int res = INT_MAX;
	int cnt_1 = 0, cnt_2 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cnt_1 += (a[i] % 4 == 1);
		cnt_2 += (a[i] % 4 == 2);
	}
	for (int i = 0; i < n; i++) {
		int mod = a[i] % k;
		res = min((mod == 0 ? 0 : (k - mod)), res);
		if (k == 4) {
			if (mod == 1) {
				if (cnt_1 > 1) {
					res = min(res, 2);
				}
				if (cnt_2 == 1) {
					res = min(res, 1);
				}
			}
			else if (mod == 2) {
				if (cnt_2 >= 2) res = 0;
			}
		}
	}
	cout << res << endl;
}

int main() {
	int t; cin >> t;
	while (t--) {
		solve();
	}
}
