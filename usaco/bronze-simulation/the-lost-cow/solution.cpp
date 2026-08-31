#include <bits/stdc++.h>

using namespace std;

void setIO(string s) {
   freopen((s + ".in").c_str(), "r", stdin);
   freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("lostcow");
    int x, y; cin >> x >> y;
    int pos = x, n = 0, dist = 0, k = 1;
    if (x < y) {
        while (pos < y) {
            int tmp = pos;
            pos = x + (n & 1 ? -1 : 1) * pow(2, n);
            dist += abs(tmp - pos);
            n++;
        }
        dist -= pos - y;
        cout << dist << endl;
    }
    else if (x == y) {
        cout << 0 << endl;
    }
    else {
        while (pos > y) {
            int tmp = pos;
            pos = x + (n & 1 ? -1 : 1) * pow(2, n);
            dist += abs(tmp - pos);
            n++;
        }
        dist -= y-pos;
        cout << dist << endl;
    }

}
