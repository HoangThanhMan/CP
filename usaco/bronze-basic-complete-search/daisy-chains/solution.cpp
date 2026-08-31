#include <bits/stdc++.h>

using namespace std;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    int n; cin >> n;
    vector <int>  v(n);
    for(auto& i: v) cin >> i;
    int rs=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            double avrg=0;
            for(int f=i;f<=j;f++) avrg+=v[f];
            avrg/=j-i+1;
            for(int k=i;k<=j;k++){
                if(avrg==v[k]){
                    rs++;
                    break;
                }
            }
        }
    }
    cout << rs;
}
