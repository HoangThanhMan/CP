#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		priority_queue<int> pq;
		map<int,int> mp;
		for(int i=0;i<k;i++){
			int b,c;
			cin >> b >> c;
			mp[b]+=c;
		}
		for(int i=1;i<=k;i++){
			pq.push(mp[i]);
		}
		int i=0;
		int ans=0;
		while(!pq.empty() && i<n){
			ans+=pq.top();
			pq.pop();
			i++;
		}
		cout << ans << endl;
	}
}