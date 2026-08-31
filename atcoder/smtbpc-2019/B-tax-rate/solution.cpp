#include <bits/stdc++.h>

using namespace std;


int main(){
    int N; cin >> N;
    int res=N*100/108;
    if((int)(res*1.08)==N) cout << res << endl;
    else if ((int)((res+1)*1.08)==N) cout << res+1 << endl;
    else cout << ":(" << endl;
}
