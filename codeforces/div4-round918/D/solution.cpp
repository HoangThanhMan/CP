#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pair<int,int>>

using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    map <char,char> mp;
    mp['a']=mp['e']='V';
    mp['c']=mp['d']=mp['b']='C';
    for(int i=0;i<n;i++){
        if (n-i<=3){
            cout << s[i];
        }else{
            if(mp[s[i]]=='C' && mp[s[i+1]]=='V'){
                cout << s[i] << s[i+1];
                if(mp[s[i+2]]=='C'){
                    cout << s[i+2] << ".";
                    i=i+2;
                }else{
                    cout << ".";
                    i=i+1;
                }
            }
        }
    }
    cout << endl;
}

int main(){
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
}
