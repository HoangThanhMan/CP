#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    bool check=0;
    for(int i=1;i<n;i++){
        if((s[i]=='a' && s[i-1]=='b') || (s[i]=='b' && s[i-1]=='a')){
            check=true;
            break;
        }
    }
    cout << (check ? "Yes" : "No");
}
