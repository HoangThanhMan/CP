#include <iostream>
#include <algorithm>
#include <vector>
#define MaxN 1007

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		char sq[MaxN][MaxN];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> sq[i][j];
			}
		}
		int res = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == j) {
					for (int k = i; k < n - j - 1; k++) {
						vector <int> v;
						v.push_back((int)sq[i][k]);
						v.push_back((int)sq[k][n - j - 1]);
						v.push_back((int)sq[n - j - 1][n - k - 1]);
						v.push_back((int)sq[n - k - 1][i]);
						sort(v.begin(), v.end());
						res += 4 * v[3] - v[0] - v[1] - v[2] - v[3];
					}
				}
			}
		}
		cout << res << endl;
	}
}