#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,c; cin >> n >> m >> c;
    vector <int> b(m); for(auto& i:b) cin >> i;
    int cnt=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            int x; cin >> x;
            sum+=x*b[j];
        }
        sum+=c;
        if(sum>0) cnt++;
    }
    cout << cnt << endl;
}
