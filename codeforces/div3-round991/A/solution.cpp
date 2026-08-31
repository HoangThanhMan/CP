#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int m, n; cin >> n >> m;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		string s; cin >> s;
		v[i] = s.size();
	}

	int sum = 0;
	int ans = 0;
	for(auto& val : v){
		sum += val;
		if(sum > m) break;
		ans++;
	}

	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		run_case();
	}
}