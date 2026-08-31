#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s;

bool check_1100(ll i){
	ll n = s.size();
	if(i<0) return false;
	if(i>=n-3) return false;
	if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0') return true;
	return false;
}

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(nullptr);
	ll t;
	cin >> t;
	while(t--){
		cin >> s;
		ll q;
		cin >> q;
		ll cnt=0;
		for(int i=0;i<s.size();i++){
			cnt+=check_1100(i);
		}
		while(q--){
			ll i, v; cin >> i >> v; i--;
			if(s[i]!=v+'0'){
				bool before = check_1100(i) || check_1100(i-1) || check_1100(i-2) || check_1100(i-3);
				s[i]=v+'0';
				bool after = check_1100(i) || check_1100(i-1) || check_1100(i-2) || check_1100(i-3);
				cnt += after-before;
			}	
			cout << (cnt ? "YES\n" :"NO\n");
		}

	}
}