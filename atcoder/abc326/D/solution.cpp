#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    string C,R;
    cin >> N >> R >> C;
    char tab[6][6];
    //bool check=true;
    set <char> s1;
    set<char> s2;
    for(int i=0;i<N;i++){
        s1.insert(C[i]);
        s2.insert(R[i]);
    }
    if(s1.size()==3 && s2.size()==3 && C[0]==R[0]){
        cout << "Yes\n";
        map<char,bool> mpc[6];
        map<char,bool> mpr[6];
        string s="ABC";
        for(int i=0;i<N;i++){
            for(int j=0;j<3;j++){
                mpc[i][s[j]]=0;
                mpr[i][s[j]]=0;
            }
        }
        for(int i=0;i<N;i++) fill_n(tab[i],N,'.');
        for(int i=0;i<N;i++){
            if(mpr[0][C[i]]==0 ){
                tab[0][i]=C[i];
                mpr[0][C[i]]=1;
                mpc[i][C[i]]=1;
            }
            if(mpc[0][R[i]]==0 ){
                tab[i][0]=R[i];
                mpc[0][R[i]]=1;
                mpr[i][R[i]]=1;
            }
        }
        //cout << mpc[2]['C'] << mpr[2]['C'];
        for(int k=0;k<3;k++){
            for(int i=1;i<N;i++){
                for(int j=1;j<N;j++){
                    if(tab[i][j]=='.'){
                        if(mpc[j][s[k]]==0 && mpr[i][s[k]]==0){
                            tab[i][j]=s[k];
                            mpc[j][s[k]]=1;
                            mpr[i][s[k]]=1;
                        }
                    }
                }
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout << tab[i][j];
            }
            cout << endl;
        }
    }
    else{
        cout << "No\n";
    }
}
