#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n; cin >> m >> n;
    vector <int> v(m);
    for(auto &i: v) cin >> i;
    sort(v.begin(),v.end());
    int res=0;
    for(int i=0;i<n;i++){
        if(v[i]<0)
            res-=v[i];
    }
    cout << res << endl;
}
