#include <iostream>
#include <algorithm>

using namespace std;

int solve(int n){
    if(n==1) return 1;
    if(n&1){
        return 1+solve(3*n+1);
    }else{
        return 1+solve(n/2);
    }
}

int main(){
    int i,j;
    while(cin >> i >> j){
        int res=0;
        if(i>j) swap(i,j);
        for(int l=i;l<=j;l++){
            res=max(solve(l),res);
        }
        cout << i << " " << j << " " << res << endl;
    }
}
