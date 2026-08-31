#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,A,B; string S;
    cin >> N >> A >> B >> S;
    int a=A,b=B;
    int cnt=0;
    for(int i=0;i<N;i++){
        if(S[i]=='a' && cnt<A+B ){
            cout << "Yes" << endl;
            cnt++;
        }else if(S[i]=='b'&& ((--b)>=0 && cnt<A+B)){
            cout << "Yes" << endl;
            cnt++;
        }else cout << "No" << endl;
    }
}
