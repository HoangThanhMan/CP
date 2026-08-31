#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> mp;
        int ans=0;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            mp[x]++;
        }
        for(auto x: mp){
            ans+=x.second/2;
        }
        cout << ans << endl;
    }
}