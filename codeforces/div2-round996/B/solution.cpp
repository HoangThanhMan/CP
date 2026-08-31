#include <bits/stdc++.h>

#define ll long long


using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		vector<ll> a(n);
		vector<ll> b(n);
		for(auto&x : a) cin >> x;
		for(auto&x : b) cin >> x;
		ll s1 =0;
		ll s2=0;
		ll m = 10e9;
		ll M = 0;
		int cnt =0;
		for(int i=0;i<n;i++){
			s1+=a[i];
			s2+=b[i];
			m=min(a[i]-b[i], m);
			if(a[i] <= b[i])
			 	M = max(b[i]-a[i], M);
		}
		if(s1 < s2 || m < M) cout << "NO\n";
		else{
			cout << "YES\n";
		}
	}
}