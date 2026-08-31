#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> getFactors(long long n) {
    vector<long long> factors;
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i);
            if (i != n / i) {
                factors.push_back(n / i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    return factors;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, z, k;
        cin >> x >> y >> z >> k;

        long long max_positions = 0;

        vector<long long> factors = getFactors(k);

        for (long long a : factors) {
            if (a > x) continue;
            for (long long b : factors) {
                if (b > y) continue;
                if (k % (a * b) == 0) {
                    long long c = k / (a * b);
                    if (c <= z) {
                        long long positions = (x - a + 1) * (y - b + 1) * (z - c + 1);
                        max_positions = max(max_positions, positions);
                    }
                }
            }
        }

        cout << max_positions << endl;
    }

    return 0;
}

