#include <bits/stdc++.h>


using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, k;
		string s="";
		cin >> n >> m >> k;
		vector<int> a(m);
		vector<int> q(k);
		for(auto& x: a) cin  >> x;
		for(auto& x: q) cin >> x;
		map<int, bool> mp;
		for(int i=1;i<=n;i++) mp[i]=0;
		for(int i=0;i<k;i++){
			mp[q[i]]=true;
		}

		for(int i=0;i<m;i++){
			if(q.size()==n ||(q.size()==n-1 && mp[a[i]]==false)){
				s+='1';
			}else{
				s+='0';
			}
		}

		cout << s << endl;
	}
}