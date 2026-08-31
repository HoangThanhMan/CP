#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<bool> is_prime(2*n+1, true);
        is_prime[0] == is_prime[1] == true;

        for(int i=2;i*i<=2*n;++i){
            if(is_prime[i]){
                for(int j=i*i;j<=2*n;j+=i){
                    is_prime[j]=false;
                }
            }
        }
        vector<int> a;
        vector<int> b;
        for(int i=1;i<=n;i++){
            if(i&1){
                a.push_back(i);
            }else{
                b.push_back(i);
            }
        }
        int k = a.back();
        int tmp=0;
        for(auto x: b){
            if(!is_prime[k+x]){
                tmp=x;
            }
        }
        if(tmp==0) cout << -1 << endl;
        else{
            for(auto x:a) cout << x << " ";
            cout << tmp << " ";
            for(auto x:b){
                if(tmp!=x) cout << x << " ";
            }
            cout << endl;
        }
    }
}