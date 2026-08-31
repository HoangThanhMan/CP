#include <bits/stdc++.h>

using namespace std;
typedef vector <int> vi;
typedef pair<int,int> pii;
typedef vector<pair<int,int>> vii;


void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

struct fence{
    int x1,y1,x2,y2;
};

int main(){
    setIO("square");
    fence f1,f2;
    cin >> f1.x1 >> f1.y1 >> f1.x2 >> f1.y2;
    cin >> f2.x1 >> f2.y1 >> f2.x2 >> f2.y2;
    int edge=max((max(f1.x2,f2.x2)-min(f1.x1,f2.x1)),max(f1.y2,f2.y2)-min(f1.y1,f2.y1));
    cout << edge*edge;
}
