#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    int cnt=0;
    int res=0, a;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a==1) cnt=0;
        else{
            ++cnt;
            res=max(cnt,res);
        }
    }
    cout << res << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--){
        solve();
    }
}
