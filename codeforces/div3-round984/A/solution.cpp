#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(auto &x: v) cin >> x;
		bool check = true;
		for(int i=0;i<n-1;i++){
			if(abs(v[i]-v[i+1])!=7 && abs(v[i]-v[i+1])!=5){
				check=false;
				break;
			}
		}
		cout << (check == false ? "NO\n" : "YES\n");
	}
}