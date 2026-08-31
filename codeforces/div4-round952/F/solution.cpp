#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long h;
        int n;
        cin >> h >> n;

        vector<long long> a(n), c(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }

        // Priority queue to manage attacks (cooldown, attack index)
        priority_queue<tuple<long long, int>, vector<tuple<long long, int>>, greater<tuple<long long, int>>> pq;

        // Initial insert of all attacks
        for (int i = 0; i < n; ++i) {
            pq.push({0, i}); // at turn 0, all attacks are available
        }

        long long current_turn = 0;
        long long total_damage = 0;

        while (h > 0) {
            // Move to the next available attack turn
            current_turn = get<0>(pq.top());
            total_damage = 0;

            vector<tuple<long long, int>> next_attacks;

            // Use all attacks that are available at this turn
            while (!pq.empty() && get<0>(pq.top()) == current_turn) {
                int idx = get<1>(pq.top());
                pq.pop();
                total_damage += a[idx];
                next_attacks.push_back({current_turn + c[idx], idx});
            }

            // Apply the total damage of this turn to the boss
            h -= total_damage;

            // Reinsert the attacks with updated cooldown turns
            for (auto &attack : next_attacks) {
                pq.push(attack);
            }

            // Count this turn
            current_turn++;
        }

        cout << current_turn << "\n";
    }

    return 0;
}
