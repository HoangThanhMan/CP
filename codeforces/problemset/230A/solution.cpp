#include <bits/stdc++.h>

using namespace std;

int main(){
    int s,n; cin >> s >> n;
    vector <pair<int,int>> level(n);
    for(auto& i: level) cin >> i.first >> i.second;
    sort(level.begin(), level.end());
    bool ok=1;
    for(int i=0;i<n;i++){
        int x=level[i].first, y=level[i].second;
        if(s<=x){
            ok=0;
            break;
        }else{
            s+=y;
        }
    }
    cout << (ok? "YES" : "NO");
}

