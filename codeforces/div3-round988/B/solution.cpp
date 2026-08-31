#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        vector<int> v(k);
        map<int,int> mp;
        for(int i=0;i<k;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        for(int i=0;i<k;i++){
            if((k-2)%v[i]==0 ) {
                if(mp[(k-2)/v[i]]>=1){
                    if((k-2)/v[i]==v[i] && mp[(k-2)/v[i]]==1) continue;
                    cout << v[i] << " " << (k-2)/v[i] << endl;
                    break;
                }
            }
        }
    }
}