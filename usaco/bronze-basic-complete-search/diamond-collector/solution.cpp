#include <bits/stdc++.h>

using namespace std;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    setIO("diamond");
    int n,k; cin >> n >> k;
    vector <int> v(n);
    for(auto& i: v) cin >> i;
    sort(v.begin(),v.end());
    int rs=0;
    for(int i=0;i<n;i++){
        int key=v[i];
        int cnt=0;
        for(int j=i;j<n;j++){
            if(abs(key-v[j])<=k) {cnt++;}
        }
        rs=max(rs,cnt);
    }
    cout << rs;
}
