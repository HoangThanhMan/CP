#include <bits/stdc++.h>
#include <algorithm>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n; cin >> n;
    int ans[3]={0};
    int shell[3];
    for(int i=0;i<3;i++) shell[i]=i;
    for(int i=0;i<n;i++){
        int a,b,g; cin >> a >> b >> g;
        --a;--b;--g;
        swap(shell[a],shell[b]);
        ans[shell[g]]++;
    }
    int res=0;
    for(int i=0;i<3;i++){
        res=max(res,ans[i]);
    }
    cout << res << endl;
}
