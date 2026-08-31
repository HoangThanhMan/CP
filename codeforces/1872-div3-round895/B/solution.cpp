#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int d,s; cin >> d >> s;
        if(mp[d]){
            mp[d]=min(s,mp[d]);
        }else mp[d]=s;
    }
    int i=1;
    int timeLim=10000000;
    while(i<=timeLim){
        if(mp[i]){
            timeLim=min(timeLim,i+(mp[i]-1)/2);
        }
        i++;
    }
    cout << i-1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
