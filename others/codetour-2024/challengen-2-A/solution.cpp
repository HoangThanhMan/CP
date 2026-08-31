#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<pair<int, int>> tasks;
    for (int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        tasks.push_back({b, a});
    }

    vector<int> students(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> students[i];
    }
    sort(tasks.begin(), tasks.end());
    vector<long long> prefixSum(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        prefixSum[i + 1] = prefixSum[i] + tasks[i].second;
    }
    for (int i = 0; i < Q; ++i) {
        int capability = students[i];
        auto it = upper_bound(tasks.begin(), tasks.end(), make_pair(capability, 1000000000));
        int idx = distance(tasks.begin(), it);
        cout << prefixSum[idx] << endl;
    }

    return 0;
}
