#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll s=0;
        for(int i=0,x;i<n;i++) {cin >> x; s+=x;}
        bool ok=0;
        ll l=1,r=1e9;
        while(l<=r){
            ll mid=l+(r-l)/2;
            if(mid*mid==s){
                ok=1;
                break;
            }else if(mid*mid<s){
                l=mid+1;
            }else r=mid-1;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}
