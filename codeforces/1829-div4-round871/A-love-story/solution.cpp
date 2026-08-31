#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    string s="";
    string tar = "codeforces";
    while(t--){
        cin >> s;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            cnt+=(s[i]!=tar[i]);
        }
        cout << cnt << endl;
    }
}
