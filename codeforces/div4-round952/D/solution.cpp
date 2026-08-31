#include <bits/stdc++.h>

using namespace std;


int main(){
	int t; cin >> t;
	while(t--){
		int m,n; cin >> n >> m;
		vector<string> mat(n);
		for(int i=0;i<n;i++){
			cin >> mat[i];
		}
		int m_x=2000005;
		int M_x=-1;
		int m_y=2000005;
		int M_y=-1;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(mat[i][j]=='#'){
					m_x=min(m_x,j);
					M_x=max(M_x,j);
					m_y=min(m_y,i);
					M_y=max(M_y,i);
				}
			}
		}
		cout << (M_y + m_y + 2)/2 << " " << (M_x + m_x + 2)/2 << endl;
	}
}