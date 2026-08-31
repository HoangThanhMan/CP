#include <bits/stdc++.h>

using namespace std;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main(){

    int n; cin >> n;
    map<int,char> mp;
    for(int i=0;i<n;i++){
        char c; int p; cin >> c >> p;
        mp[p]=c;
    }
    int rs=1000000000;
    int check=false;
    for(auto it: mp){
        if(it.second == 'L'){
            for(auto x: mp){
                if(x.second=='G' && x.first > it.first){
                    rs=min(rs,x.first-it.first);
                    check=true;
                }
            }
        }
    }
    if(check)
        cout << rs << endl;
    else
        cout << 0 << endl;
}
