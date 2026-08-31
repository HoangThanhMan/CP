#include <bits/stdc++.h>

using namespace std;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    setIO("billboard");
    int x1,y1,x2,y2;
    int x3,y3,x4,y4;
    int x5,y5,x6,y6;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;
    int s=abs(x2-x1)*abs(y2-y1)+abs(x4-x3)*abs(y4-y3);
    int s1,s2;
    if(min(x2,x6)<max(x1,x5) || min(y6,y2)<max(y1,y5)){
        s1=0;
    }else{
        s1=abs(min(x2,x6)-max(x1,x5))*abs(min(y6,y2)-max(y1,y5));
    }
    if(min(x4,x6) < max(x3,x5) ||min(y4,y6)<max(y3,y5)){
        s2=0;
    }
    else{
        s2=abs(min(x4,x6)-max(x3,x5))*abs(min(y4,y6)-max(y3,y5));
    }
    cout << s-s1-s2;
}
