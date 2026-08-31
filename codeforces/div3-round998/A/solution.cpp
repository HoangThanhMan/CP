#include <bits/stdc++.h>


using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,d,e;
        cin >> a >> b >> d >> e;
        map<int, int > mp;
        mp[a+b]++;
        mp[d - b]++;
        mp[e-d]++;
        int cnt =0;
        for(auto it : mp)
            cnt = max(it.second, cnt);
        cout << cnt << endl;
    }
}