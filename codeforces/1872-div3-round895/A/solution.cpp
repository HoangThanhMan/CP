#include <bits/stdc++.h>

using namespace std;

void solve(){
    double a,b,c; cin >> a >> b >> c;
    cout << ceil(abs(a-b)/(2*c)) << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
