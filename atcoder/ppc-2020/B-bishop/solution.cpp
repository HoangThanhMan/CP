#include <bits/stdc++.h>

using namespace std;

int main(){
    long long W, H; cin >> W >> H;
    cout << ((H==1 || W==1 )? 1 : ((H+1)/2)*W - (H&1)*W/2);
}
