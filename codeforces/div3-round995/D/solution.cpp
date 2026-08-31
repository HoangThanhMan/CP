#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n,x,y;
		cin >> n >> x >> y;
		ll sum = 0;
		vector<ll> a(n);
		for(int i=0;i<n;i++){
			cin >> a[i];
			sum+=a[i];
		}
		sort(a.begin(), a.end());
		ll ans =0;
		for(int i=0;i<n-1;i++){
			int j=i+1;
			while(j<n){
				ll val = sum - (a[i] + a[j]);
				if(val>=x && val <=y){
					ans++;
				}
				if(val < x) break;
				j++;
			}

			if(j-i==1) break;
		}
		cout << ans << endl;
	}
}