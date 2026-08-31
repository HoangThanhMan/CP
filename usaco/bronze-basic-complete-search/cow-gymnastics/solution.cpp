#include <bits/stdc++.h> 


using namespace std;


int main(){
	freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);
	cin.tie(0)->sync_with_stdio(0);
	int k, n;
	cin >> k >> n;
	set<pair<int, int>> cows, used;	
	while(k--){
		vector<int> v(n);
		for(auto &x : v) cin >> x;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				int a = v[i];
				int b = v[j];
				if(cows.count({b, a})){
					used.insert({b, a});
					cows.erase({b, a});
				}
				if(!used.count({a,b}) && !used.count({b,a})) cows.insert({a,b});	
			}
		}
	}
	cout << cows.size() << endl;
}
