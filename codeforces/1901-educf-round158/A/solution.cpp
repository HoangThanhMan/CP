#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,x; cin >> n >> x;
    vector <int> v(n);
    for(auto &i:v) cin >> i;
    int Fdist=2*(x-v[n-1]);
    int MaxDist=0;
    for(int i=0;i<n;i++){
        if(i==0) MaxDist=v[i];
        else MaxDist=max(MaxDist,v[i]-v[i-1]);
    }
    cout << max(MaxDist,Fdist) << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
