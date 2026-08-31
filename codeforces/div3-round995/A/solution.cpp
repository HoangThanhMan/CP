#include <bits/stdc++.h>

using namespace std;



int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		vector<int> b(n);
		for(int& x: a) cin >> x;
		for(int& x: b) cin >> x;
		int ans = 0;
		for(int i=0;i<n;i++){
			if(i==n-1){
				ans+=a[i];
			}else{
				if(a[i]>=b[i+1]){
					ans+=a[i]-b[i+1];
				}
			}
		}

		cout << ans << endl;
	}
}
