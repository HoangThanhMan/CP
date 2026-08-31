#include <iostream>
#include <string>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		string x, s; cin >> x >> s;
		int cnt = 0;
		while (true) {
			bool check = false;
			for (int i = 0; i < x.size(); i++) {
				if (x[i] == s[0]) {
					string tmp = x.substr(i, m);
					if (tmp == s) {
						check = true;
						break;
					}
				}
			}
			if (check) break;
			else {
				if (x.size() / s.size() > 10) {
					cnt = -1;
					break;
				}
			}
			x += x;
			cnt++;
		}
		cout << cnt << endl;
	}
}