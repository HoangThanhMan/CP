#include <bits/stdc++.h>

using namespace std;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    setIO("cowsignal");
    int m, n; cin >> m >> n;
    int k; cin >> k;
    char a[11][11];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int x=0;x<k;x++){
        for(int j=0;j<n;j++){
            for(int z=0;z<k;z++){
                cout << a[i][j];
            }
        }
        cout << endl;
        }
    }
}
