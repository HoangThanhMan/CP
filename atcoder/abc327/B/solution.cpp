#include <bits/stdc++.h>

using namespace std;


int main(){
    long long b; cin >> b;
    long long val=0;
    int i=0;
    bool check=0;
    while(val<=b){
        val=1ll*pow(i,i);
        if(val==b) {check=1;break;}
        i++;
    }
    if(check) cout << i;
    else cout << -1;
}
