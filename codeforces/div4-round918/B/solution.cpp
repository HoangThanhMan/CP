#include <bits/stdc++.h>

using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        char tab[4][4];
        map <char,bool> mp;
        char res;
        for(int i=0;i<3;i++){
            mp['A']=mp['B']=mp['C']=0;
            for(int j=0;j<3;j++){
                cin >> tab[i][j];
                mp[tab[i][j]]=1;
            }
            if(mp['A']==0) res='A';
            else if(mp['B']==0) res='B';
            else if(mp['C']==0) res='C';
        }
        cout << res << endl;
    }
}
