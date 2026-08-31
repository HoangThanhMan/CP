#include <bits/stdc++.h>

using namespace std;

void solve1(){
	int n=2700;
	int was[n];

	memset(was,0,sizeof(was));

	for(int i=2;i<=n;i++){
		if(was[i]==0){
			for(int j=i+i;j<=n;j+=i){
				was[j]++;
			}
		}
	}

	int arr[1001];

	memset(arr,0,sizeof(arr));

	for(int i=30, j=1;i<2700 && j<1001;i++){
		if(was[i]>=3){
			arr[j++]=i;
		}
	}

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << arr[n] << endl;
	}
}

void solve2(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int MAX_VALUE=10000;
		bool primes[MAX_VALUE];
		memset(primes,1,sizeof(primes));
		primes[0]=primes[1]=0;
		for(int i=2;i*i<=MAX_VALUE;i++){
			if(primes[i]==1){
				for(int j=i*i;j<=MAX_VALUE;j*=i){
					primes[j]=0;
				}
			}
		}
		int counter=0;
		for(int i=30;i<=MAX_VALUE;i++){
			int count=0;
			for(int j=2;j*j<i;j++){
				if(primes[j]){
					if(i%j==0){
						count++;
					}
				}
			}
			if(count>=3){
				++counter;
				if(counter==n){
					cout << i << endl;
					break;
				}
			}
		}
	}
}

int main(){
	solve1();
}