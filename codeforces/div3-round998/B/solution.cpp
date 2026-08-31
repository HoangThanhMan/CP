#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		bool ok = true;
		map<int,int> mp;
		for(int i=0;i<n;i++){
			vector<int> v;
			for(int j=0;j<m;j++){
				int x; cin >> x;
				v.push_back(x);
			}

			sort(v.begin(), v.end());
			mp[v[0]]=i+1;
			for(int j=1;j<m;j++){
				if(v[j]-v[j-1] != n){
					ok = false;
					break;
				}
			}

		}

		if(!ok) cout << -1 << endl;
		else{
			for(auto it : mp){
				cout << it.second << " ";
			}
			cout << endl;
		}
	}
}