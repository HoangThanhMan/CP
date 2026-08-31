#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        string s; cin >> s;
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int le=0,chan=0;
        for(auto x:mp){
            if(x.second>=2){
                le+=(x.second%2!=0);
                chan+=x.second-(x.second%2!=0);
            }
            else{
                le+=1;
            }
        }
        if(le>=k){
            le-=k;
        }else{
            chan=abs(chan-(k-le));
            le=0;
        }
        if(le>1){
            cout << "NO\n";
        }else{
            if(le==1 && chan==1){
                cout << "NO\n";
            }else{
                cout << "YES\n";
            }
        }
    }
}
