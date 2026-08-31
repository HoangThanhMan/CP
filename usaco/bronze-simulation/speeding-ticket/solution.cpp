#include <bits/stdc++.h>

using namespace std;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    setIO("speeding");
   int n, m; cin >> n >> m;
   vector <int> lim(101);
   int start=0;
   for(int i=0;i<n;i++){
        int length, speed; cin >> length >> speed;
        for(int j=start; j<start+length;j++) lim[j]=speed;
        start+=length ;
   }
   start=0;
   int ans=0;
   for(int i=0;i<m;i++){
        int len,spe; cin >> len >> spe;
        for(int j=start;j<start+len;j++) ans=max(ans,spe-lim[j]);
        start+=len;
   }
   cout << ans;
}
