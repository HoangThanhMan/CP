#include <bits/stdc++.h>

using namespace std;


int main(){
	int n, m; cin >> n >> m;
	vector<string> v(n);
	int ans = 0;
	for(auto &x : v) cin >> x;
	for(int i=0;i<m;i++){
		int spot=0;
		int plain=0;
		for(int j=0;j<n;j++){
			if(v[i][j] == 'A' || v[i][j] == 'G'){
				spot++;
			}else if(v[i][j] == 'C') plain++;
		}
		if(plain + spot == n) ans++;
	}
	cout << ans << endl;
}
