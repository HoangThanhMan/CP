#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		int cnt = 0;
		if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c') {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}