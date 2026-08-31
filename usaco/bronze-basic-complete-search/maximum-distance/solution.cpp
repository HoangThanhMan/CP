#include <bits/stdc++.h>


using namespace std;

int main(){
    int n; cin >> n;
    vector <int> x(n);
    vector <int> y(n);
    for(int&i: x) cin >> i;
    for(int&i: y) cin >> i;
    int rs=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int dx=x[i]-x[j];
            int dy=y[i]-y[j];
            int dist=dx*dx+dy*dy;
            rs=max(dist,rs);
        }
    }
    cout << rs << endl;
}
