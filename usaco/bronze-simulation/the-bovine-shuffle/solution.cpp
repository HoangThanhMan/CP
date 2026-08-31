#include <bits/stdc++.h>

using namespace std;

void setIO(string s) {
   freopen((s + ".in").c_str(), "r", stdin);
   freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("shuffle");
    int n; cin >> n;
    vector <int> shuffle(n);
    vector <int> id(n);
    for(auto&i:shuffle) cin >> i;
    for(auto&i:id) cin >> i;
    for(int i=0;i<3;i++){
        vector <int> past(n);
        for(int j=0;j<n;j++){
            past[j]=id[shuffle[j]-1];
        }
        id=past;
    }
    for(auto i:id) cout << i << '\n';
}
