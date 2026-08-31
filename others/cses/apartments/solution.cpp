#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,m,k; cin >> n >> m >> k;
    set <int> s;
    vector <int> v(n);
    map <int, int> mp;
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    for(int i=0;i<m;i++){
        int sz; cin >> sz;
        s.insert(sz);
        mp[sz]=i;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        int l=v[i]-k;
        int r=v[i]+k;
        auto it1=s.upper_bound(v[i]-k);
        auto it2=s.lower_bound(v[i]-k);
        if(s.find(l)!=s.end()){
            cnt+=abs(mp[*it2]-mp[l]) + 1;
            s.erase(it2);
            s.erase(l);
        }
        else{
            cnt+=abs(mp[*it2]-mp[*it1])+1;
            s.erase(it1);
            s.erase(it2);
        }
        if(s.empty()) break;
    }
    cout << cnt;

}
