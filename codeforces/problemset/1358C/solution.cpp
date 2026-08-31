#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin >> n;
    vector <int> v(n);
    for(auto &i:v) cin >> i;
    sort(v.begin(),v.end());
    for(int i=n-1;i>=0;i--){
        if(v[i]<=i+1){
            cout << i+2 << endl;
            return;
        }
    }
    cout << 1 << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}


