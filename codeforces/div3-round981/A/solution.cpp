#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int x=0;
		int i=1;
		while(x<=n && x>=-n){
			x = x + (i%2==1 ? -1 : 1)*(2*i-1);
			i++;
		}
		if((i-1)&1){
			cout << "Sakurako\n";
		}else{
			cout << "Kosuke\n";
		}
	}
}