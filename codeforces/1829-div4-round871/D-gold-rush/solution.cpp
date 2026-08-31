#include <bits/stdc++.h>
#define Maxi 10000000

using namespace std;

bool DFS(int s, int target){
    if(s==target) return true;
    else if(s%3==0){
    return (DFS(s/3,target) || DFS(2*s/3,target) );
    ///if(!visited[s/3]){ visited[s/3]=true; return DFS(s/3,target);}
    ///if(!visited[2*s/3]){visited[2*s/3]=true;return DFS(2*s/3,target); }
    }else{
        return false;
    }
}

void solve(){
    int n,m; cin >> n >> m;
    cout << (DFS(n,m) ? "YES\n" : "NO\n");
}

int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
}
