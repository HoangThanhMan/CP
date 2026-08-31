#include <bits/stdc++.h>
#define Maxi 1000

using namespace std;
typedef queue<pair <int,int>> queueii;
typedef pair<int,int> pii;

int n,m;
bool visited[Maxi][Maxi];
int grid[Maxi][Maxi];
int dc[]={-1,1,0,0};
int dr[]={0,0,1,-1};

bool is_valid(int r, int c){
    return c<m && c>=0 && r<n && r>=0;
}
int BFS(int sR, int sC){
    queueii st;
    st.push({sR,sC});
    int v=grid[sR][sC];
    grid[sR][sC]=0;
    while(!st.empty()){
        pii u=st.front();
        st.pop();
        for(int i=0;i<4;i++){
            int cR=u.first + dr[i];
            int cC=u.second + dc[i];
            if(is_valid(cR,cC)){
                if(grid[cR][cC]!=0){
                    v+=grid[cR][cC];
                    grid[cR][cC]=0;
                    st.push({cR,cC});
                }
            }
        }
    }
    return v;
}


void solve(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> grid[i][j];
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]!=0){
                res=max(res,BFS(i,j));
            }
        }
    }
    cout << res << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        solve();
    }
}
