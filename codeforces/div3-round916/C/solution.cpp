#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<pair<int, int>> diff;

        for (int i = 0; i < n; ++i) {
            diff.push_back({a[i] - b[i], i});
        }

        sort(diff.begin(), diff.end(), greater<pair<int, int>>());

        long long total_exp = 0;
        long long total_points = 0;

        for (int i = 0; i < n; ++i) {
            int index = diff[i].second;
            total_exp += a[index];

            if (i < k) {
                total_points += total_exp;
            }
        }

        cout << total_points << endl;
    }

    return 0;
}
