#include <bits/stdc++.h>

using namespace std;

void setIO(string s) {
   freopen((s + ".in").c_str(), "r", stdin);
   freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("blist");
    int n; cin >> n;
    vector <int> change(1000+5);
    int timeMx=0;
    for(int i=0;i<n;i++){
        int start,finish,bucket;
        cin >> start >> finish >> bucket;
        change[start]=bucket;
        change[finish]=-bucket;
        timeMx=max(timeMx,finish);
    }
    int cur=0;
    int ans=0;
    for(int i=0;i<=timeMx;i++){
        cur+=change[i];
        ans=max(ans,cur);
    }
    cout << ans << endl;
}
