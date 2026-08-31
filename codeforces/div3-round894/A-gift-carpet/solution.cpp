#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        char a[21][21];
        string tar="vika";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
            }
        }
        int index=0;
        bool is_vika=false;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[j][i]==tar[index]){
                    if(index==3) is_vika=true;
                    index++;
                    break;
                }
            }
        }
        cout << (is_vika ? "YES" : "NO") << endl;
    }
}
