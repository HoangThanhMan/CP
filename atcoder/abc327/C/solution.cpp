#include <bits/stdc++.h>

using namespace std;

int a[9][9];

bool checkSq(int r, int c){
    map <int,bool> mp;
    for(int i=r;i<r+3;i++){
        for(int j=c;j<c+3;j++){
            mp[a[i][j]]=true;
        }
    }
    for(int i=1;i<=9;i++) {
        if(mp[i]==false) return false;
    }
    return true;
}
bool checkRow(int r){
    map<int,bool> mp;
    for(int i=0;i<9;i++){
        mp[a[r][i]]=true;
    }
    for(int i=1;i<=9;i++) {
        if(mp[i]==false) return false;
    }
    return true;
}
bool checkCol(int c){
    map <int, bool> mp;
    for(int i=0;i<9;i++){
        mp[a[i][c]]=true;
    }
    for(int i=1;i<=9;i++) {
        if(mp[i]==false) return false;
    }
    return true;
}

bool solve(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<9;i++ ){
        for(int j=0;j<9;j++){
            if(i==0){
                if(!checkCol(j)) return false;
            }
            if(j==0){
                if(!checkRow(i)) return false;
            }
            if(i%3==0 && j%3==0){
                if(!checkSq(i,j)) return false;
            }
        }
    }
    return true;
}

int main(){
    cout << (solve() ? "Yes" : "No");
}
