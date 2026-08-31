#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n ;
		long long a[501][501];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
			}
		}
		long long cnt=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==0 || j==0 ){
					long long tmp = 0;
					for(int k=0;k<=n-1-max(i,j);k++){
						if(a[i+k][j+k]<0) {
							tmp = max(tmp,abs(a[i+k][j+k]));
							a[i+k][j+k]=0; 
						}
					}
					cnt+=tmp;
				}
			}
		}

		cout << cnt << endl;
	}
}