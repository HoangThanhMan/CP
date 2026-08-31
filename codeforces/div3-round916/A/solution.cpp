#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    map <char,int> mp;
    int res=0;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(auto it:mp){
        if((int)(it.first-'A'+1)<=it.second){
            res++;
        }
    }
    cout << res << '\n';
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}