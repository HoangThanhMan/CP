#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;

	while (t--) {
		char tar[11][11];
		int sco = 0;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				cin >> tar[i][j];
				if (tar[i][j] == 'X') {
					for (int k = 0; k < 5; k++) {
						if (i == k || j == k || i == 10 - k - 1 || j == 10 - k - 1) {
							sco += k + 1;
							break;
						}   
					}
				}
			}
		}
		cout << sco << endl;
	}
}