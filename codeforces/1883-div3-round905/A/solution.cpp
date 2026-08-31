#include <bits/stdc++.h>

using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        int cnt=4 + (s[0]=='0' ? 10 : s[0]-48)-1;
        for(int i=1;i<s.size();i++){
            cnt+=abs((s[i]=='0' ? 10 : s[i]-48)-(s[i-1]=='0' ? 10 : s[i-1]-48));
        }
        cout << cnt << endl;
    }
}
