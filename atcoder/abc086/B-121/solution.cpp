#include <bits/stdc++.h>

using namespace std;


int main(){
	int a, b; cin >> a >> b;
	int cnt =0;
	int tmp =b;
	while(tmp!=0){
		cnt++;
		tmp/=10;
	}
	int c = a*pow(10, cnt) + b;
	int sq = sqrt(c);
	if(sq*sq == c) cout << "Yes\n";
	else cout << "No\n";
}