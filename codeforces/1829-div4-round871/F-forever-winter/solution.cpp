#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,m;
    vector <int> g[200];
    map <int,int> mp;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b; cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        mp[g[i].size()]++;
    }
    for(auto it:mp){
        if(it.first*it.second>m) {cout << it.first << " " << it.second - 1 << endl;break;}
        else if(it.first*it.second==m) {cout << it.second <<" " << it.first - 1 << endl;break;}
    }
}

int main(){
    int t; cin >> t;
    while (t--){
        solve();
    }
}
