#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t=1;
    while(1){
        int m, n; cin >> m >> n;
        if(m==0 && n==0) break;
        char a[100][100];
        int dx[]={0,0,1,-1,1,-1,-1,1};
        int dy[]={1,-1,0,0,1,1,-1,-1};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
            }
        }
        cout << "Field #" << t++ << ":" << endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]!='*'){
                int cnt=0;
                for(int k=0;k<8;k++){
                    int x=dx[k]+i;
                    int y=dy[k]+j;
                    if(x>=0 && x<m && y>=0 && y<n){
                        if(a[x][y]=='*') cnt++;
                    }
                }
                cout << cnt;
                }else{cout << '*';}
            }
            cout << endl;
        }
        cout << endl;
    }
}
