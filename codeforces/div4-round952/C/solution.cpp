#include <bits/stdc++.h>


using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector <long long> v(n);
		for(auto &x:v) cin >> x;
		long long m = 0;
		long long sum=0;
		int count=0;
		for(int i=0;i<n;i++){
			m=max(m,v[i]);
			sum+=v[i];
			if(sum-m==m){
				count ++;
			}
		}
		cout << count << endl;
	}
}