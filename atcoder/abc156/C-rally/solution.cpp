#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(auto &i: v) cin >> i;
    int stamina = 1e9;
    sort(v.begin(),v.end());
    for(int i=0;i<=101;i++){
        int tmpStamina=0;
        for(int j=0;j<n;j++){
            tmpStamina+=(v[j]-i-1)*(v[j]-i-1);
        }
        stamina=min(stamina,tmpStamina);
    }
    cout << stamina << endl;
}
