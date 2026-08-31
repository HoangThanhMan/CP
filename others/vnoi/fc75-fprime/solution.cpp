#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
	cin >> k;
	const int maxN=100+1;
	bool isPrimes[maxN];
	memset(isPrimes,true,sizeof(isPrimes));
	isPrimes[0]=isPrimes[1]=false;

	for(int i=2;i*i<=maxN;i++){
		if(isPrimes[i]==true){
			for(int j=i*i;j<=maxN;j+=i){
				isPrimes[j]=false;
			}
		}
	}

	while(k--){
		int n; cin >> n;
		cout << (isPrimes[n]==true ? "YES" : "NO") << endl;
	}
    return 0;
}
