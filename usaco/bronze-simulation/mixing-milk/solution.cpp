#include <bits/stdc++.h>

using namespace std;

void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main(){
    setIO("mixmilk");
    vector <pair<int,int>> v(3);
    for(int i=0;i<3;i++){
        cin >> v[i].first >> v[i].second;
    }
    int k=1;
    while(k<=100){
        int j=(k-1)%3;
        int i=k%3;
        if(v[i].second+v[j].second >= v[i].first){
            v[j].second-=v[i].first-v[i].second;
            v[i].second=v[i].first;
        }else{
            v[i].second+=v[j].second;
            v[j].second=0;
        }
       k++;
    }
    for(int i=0;i<3;i++){
        cout << v[i].second << endl;
    }
}
