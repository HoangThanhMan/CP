#include <bits/stdc++.h>

using namespace std;

void run_case(){
	int n; cin >> n;
	vector<int> v(n);
	map<int,long long> sum;
	map<int,long long> cnt;
	for(int i=0;i<n;i++){
		cin >> v[i];
		sum[i%2] += v[i];
		cnt[i%2] += 1;
	}

	if(sum[0]%cnt[0]==0 && sum[1]%cnt[1]==0 && sum[0]/cnt[0] == sum[1]/cnt[1]){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}


}

int main(){
	int t;
	cin >> t;
	while(t--) run_case();
}