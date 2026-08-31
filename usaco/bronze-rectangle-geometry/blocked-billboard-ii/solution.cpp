#include <bits/stdc++.h>

using namespace std;
struct coor{
    int x1,x2,y1,y2;
};
void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

bool check(int x, int y, int x1, int y1, int x2, int y2){
    return (x>=x1 && x<=x2 && y>=y1 && y<=y2);
}

int main(){
    setIO("billboard");
    coor a,b;
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    int corNum=0;
    if(check(a.x1,a.y1,b.x1,b.y1,b.x2,b.y2)) corNum++;
    if(check(a.x1,a.y2,b.x1,b.y1,b.x2,b.y2)) corNum++;
    if(check(a.x2,a.y1,b.x1,b.y1,b.x2,b.y2)) corNum++;
    if(check(a.x2,a.y2,b.x1,b.y1,b.x2,b.y2)) corNum++;

    if(corNum<2){
        cout << (a.x2-a.x1)*(a.y2-a.y1);
    }else if(corNum==4) cout << 0;
    else{
        int x1=max(a.x1,b.x1);
        int x2=min(a.x2,b.x2);
        int y1=max(a.y1,b.y1);
        int y2=min(a.y2,b.y2);
        cout << (a.x2-a.x1)*(a.y2-a.y1)-(x2-x1)*(y2-y1);
    }
}
