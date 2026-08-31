#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<int,int> mp;
		int sum = 0;
		for(char c:s){
			mp[2] += c == '2';
			mp[3] += c == '3';
			sum+= c - '0';
		}

		bool ok = false;

		for(int i=0;i<=min(mp[2],9);i++){
			for(int j=0;j<=min(mp[3],9);j++){
				if((sum + i*2 + j*6)%9==0){
					ok = true;
					break;
				}
			}
		}

		cout << (ok ? "YES\n" : "NO\n") ;
	}
}