#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int res=0;
		int ans=0;
		for(int i=2;i<=n;i++){
			for(int j=1;j*i<=n;j++){
				int value = i*j*(j+1)/2;
				if(res < value){
					ans = i;
					res = value;
				}
			}
		}
		cout << ans << endl;
	}
}