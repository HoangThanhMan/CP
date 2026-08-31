#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x > y) {
        cout << (x - y <= 3 ? "Yes\n" : "No\n");
    } else {
        cout << (y - x <= 2 ? "Yes\n" : "No\n");
    }
    return 0;
}
