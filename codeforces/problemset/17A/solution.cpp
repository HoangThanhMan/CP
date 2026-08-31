#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; int k;
	bool arr[1001];
	memset(arr,1,sizeof(arr));
	arr[0]=arr[1]=0;
	cin >> n >> k;
	for(int i=2;i<=n;i++){
		if(arr[i]==1){
			for(int j=i*i;j<=n;j+=i){
				arr[j]=0;
			}
		}
	}
	int cnt=0;
	int counter=0;
	int sum=0;
	for(int i=2;i<=n;i++){
		if(arr[i]){
			sum+=i;
			cnt++;
		}
		if(cnt==2){
			if(arr[sum+1] && sum+1<=n) counter++;
			sum=i;
			cnt=1;
		}
	}
	cout << (counter>=k ? "YES" : "NO") << endl;
}