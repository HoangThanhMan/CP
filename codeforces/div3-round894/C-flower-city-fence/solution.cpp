#include <bits/stdc++.h>

using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        vector <long long> a(n);
        vector <pair<long long,long long>> coor;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(i!=0){
                if(a[i]!=a[i-1]){
                    coor.push_back({i,a[i]});
                }
                if(i==n-1) coor.push_back({i+1,0});
            }else{
                coor.push_back({i,a[i]});
            }
        }
        int sz=coor.size();
        bool rs=true;
        for(int i=0;i<=sz/2;i++){
            if(coor[i].first!=coor[sz-i-1].second || coor[i].second!=coor[sz-i-1].first){
                rs=false;
                break;
            }
        }
        cout << (rs? "YES\n" : "NO\n");
    }
}
