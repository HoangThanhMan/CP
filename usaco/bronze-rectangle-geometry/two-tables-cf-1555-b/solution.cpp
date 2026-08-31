#include <bits/stdc++.h>


using namespace std;

double solve( ){
    int W,H,w,h,x1,x2,y1,y2;
    cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
    if(x1>=w || W-x2>=w || y1 >=h || H-y2>=h) return 0;
    else{
        int res=1000000000;
        bool ok=false;
        if(y1<h && y2+h-y1<=H) {res=min(res,h-y1);ok=1;}
        if(H-y2<h && y1-(h+y2-H)>=0) {res=min(res,h+y2-H); ok=1;}
        if(x1<w && x2+w-x1<=W) {res=min(res,w-x1); ok=1;}
        if(W-x2<w && x1-(w-W+x2)>=0) {res=min(res,w-W+x2); ok=1;}
        if(ok==0) return -1;
        else return res;
    }
}


int main(){
    int t; cin >> t;
    while(t--){
        cout << setprecision(9) << fixed <<  solve() << endl;
    }
}
