#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> arr(n);
    double ave=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        ave+=arr[i];
    }
    ave/=2;
    sort(arr.begin(),arr.end());
    double sum=0;
    int res=0;
    for(int i=n-1;i>=0;i--){
        res++;
        sum+=arr[i];
        if(sum>ave){
            break;
        }
    }
    cout << res << endl;
}
