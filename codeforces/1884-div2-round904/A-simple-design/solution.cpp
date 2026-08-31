#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    map<string,bool> mp;
    vector <string> v = {"Welcome","Hue","University","of","Sciences"};
    while(getline(cin,s)){
        stringstream ss(s);
        string word;
        while(ss>>word) mp[word]=true;
    }
    bool check=true;
    for(int i=0;i<5;i++){
        if(mp[v[i]]){
            check=false;
            break;
        }
    }
    cout << (check ? "YES\n" : "NO\n");
}
