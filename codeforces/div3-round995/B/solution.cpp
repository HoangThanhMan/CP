#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a,b,c; cin >> n >> a >> b >> c;
		int ans = 3*(n/(a+b+c)) ;
		int val = n%(a+b+c);
		if(val==0){
			cout << ans << endl;
		}else{
			if(a>=val){
				cout << ans+1;
			}else if(a + b>=val){
				cout << ans+2;
			}else{
				cout << ans+3;
			}
			cout << endl;
		}
	}
}