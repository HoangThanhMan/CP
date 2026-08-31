#include <bits/stdc++.h>


using namespace std;

void solve(){
	int a[3][3];
	map<int ,bool> mp;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> a[i][j];
			mp[a[i][j]] = false;
		}
	}

	int n; cin >> n;
	while(n--){
		int b; cin >> b;
		mp[b]=true;
	}
	bool ok = false;
	int cnt_1 = 0;
	int cnt_2 = 0;
	for(int i=0;i<3;i++){
		int cnt =0;
		int cnt_3=0;
		for(int j=0;j<3;j++){
			if(i==j){
				cnt_1+=mp[a[i][j]];
			}

			if(i==3-j-1){
				cnt_2+=mp[a[i][j]];
			}

			cnt+=mp[a[i][j]];
			cnt_3+=mp[a[j][i]];
		}
		if(cnt == 3 || cnt_3==3) {
			ok = true;
		}
	}

	if(ok || cnt_1 ==3 || cnt_2 == 3){
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}
}


int main(){
	solve();
}