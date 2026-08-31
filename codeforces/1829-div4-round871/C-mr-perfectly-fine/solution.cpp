#include <bits/stdc++.h>
#define MaxN 2*100000

using namespace std;

void solve(){
    int n; cin >> n;
    int a; string b;
    int res01=MaxN,res10=MaxN,res11=MaxN;
    bool check01=false,check10=false,check11=false;
    for(int i=0;i<n;i++){
        cin >> a >> b;
        if(b=="01"){
            check01=true;
            res01=min(res01,a);
        }
        if(b=="10"){
            check10=true;
            res10=min(res10,a);
        }
        if(b=="11"){
            check11=true;
            res11=min(res11,a);
        }
    }
    if(check01&&check10&&check11){
        cout << min(res01+res10,res11) << endl;
    }else{
        if(check01&&check10){
            cout << res01+res10 << endl;
        }
        else if(check11) cout << res11 << endl;
        else cout << -1 << endl;
    }
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
}
