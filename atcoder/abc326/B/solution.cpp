#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i=n;i<=919;i++){
        int a=i%10;
        int b=(i/10)%10;
        int c=(i/100)%10;
        if(b*c==a){
            cout << i;
            break;
        }
    }
    return 0;
}
