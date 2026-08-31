#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, x; cin >> n >> x;
		vector <long long> coral(n);
		for (int i = 0; i < n; i++) {
			cin >> coral[i];
		}
		long long left = 0, right = 2 * 1000000000000;
		while (left < right) {
			long long mid = left + (right-left + 1) / 2;
			long long curWater = 0;
			for (int i = 0; i < n; i++) {
				curWater += max(mid - coral[i], 0LL);
			}
			if (curWater > x) {
				right = mid - 1;
			}
			else {
				left = mid;
			}
		}
		cout << left << endl;
	}
}