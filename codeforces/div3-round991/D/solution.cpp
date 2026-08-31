#include <bits/stdc++.h>


using namespace std;

void solve(){
	string s; cin >> s;
	while(1){
		bool check = false;

		for(int i=0;i<s.size()-1;i++){
			if(s[i]-'0' < s[i+1]-'0' - 1){
				check = true;
				char tmp = s[i];

				s[i] = (s[i+1]-1);
				s[i+1] = tmp;
				break;
			}
		}

		if(!check) break;
	}

	cout << s << endl;
}

int main(){
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}