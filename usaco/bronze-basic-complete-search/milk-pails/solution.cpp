#include <bits/stdc++.h>

using namespace std;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main(){
    setIO("pails");
    int X,Y,M; cin >> X >> Y >> M;
    int rs=0;
    for(int i=0;i<=M;i++){
        if(X*i>M) break;
        for(int j=0;j<=M;j++){
            int curMilk;
            curMilk=(X*i+Y*j);
            if(curMilk>M) break;
            rs=max(curMilk,rs);
        }
    }
    cout << rs;
}
