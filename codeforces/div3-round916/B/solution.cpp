#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,k; cin >> n >> k;
    for(int i=n-k,j=0;i<=n && j<=k;j++,i++){
        cout << i << ' ';
    }
    for(int i=n-k-1; i>0;i--){
        cout << i << ' ';
    }
    cout << '\n';
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
