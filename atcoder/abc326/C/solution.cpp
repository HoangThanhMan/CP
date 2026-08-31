#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector <int> v(n);
    int res=0;
    int r=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    v.push_back(9000000000000);
    for(int i=0;i<n;i++){
        while(v[r]<v[i]+m) r+=1;
        res=max(r-i,res);
    }
    cout << res;
}
