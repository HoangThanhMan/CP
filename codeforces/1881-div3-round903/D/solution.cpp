#include <iostream>
#include <vector>
#include <map>
#include <climits>

using namespace std;

void countPrime(map<int, int>& mp,vector <int> minPrime, int num) {
	/*for (int i = 2; i*i <= num; i++) {
		while (num % i == 0) {
			++mp[i];
			num /= i;
		}
	}*/
	vector<int> res;
	while (num != 1) {
		//res.push_back(minPrime[num]);
		mp[minPrime[num]]++;
		num /= minPrime[num];
	}
}

int main() {
	int t; cin >> t;
	//t = 1;
	while (t--) {
		int n; cin >> n; 
		vector <int> v(n);
		map<int, int> mp;
		int Max = INT_MIN;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			Max = max(v[i], Max);
		}
		vector <int> minPrime(Max + 1);
		for (int i = 2; i * i <= Max; ++i) {
			if (minPrime[i] == 0) { //if i is prime
				for (int j = i * i; j <= Max; j += i) {
					if (minPrime[j] == 0) {
						minPrime[j] = i;
					}
				}
			}
		}
		for (int i = 2; i <= Max; ++i) {
			if (minPrime[i] == 0) {
				minPrime[i] = i;
			}
		}
		for (int i = 0; i < n; i++) {
			countPrime(mp,minPrime, v[i]);
		}
		bool check = 1;
		for (int i = 2; i <= Max; i++) {
			if (mp[i] != 0) {
				if (mp[i] % n != 0) {
					check = 0;
					break;
				}
			}
		}
		cout << (check ? "YES\n" : "NO\n");
	}
}