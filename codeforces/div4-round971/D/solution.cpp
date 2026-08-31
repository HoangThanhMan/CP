#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> nums(n);
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            nums[i] = {x, y};
        }
        
        long long ans = 0;
        map<int, int> b;
        set<pair<int, int>> check;
        
        // Đếm số lần xuất hiện của x trong danh sách nums
        for (const auto& p : nums) {
            b[p.first]++;
            check.insert(p);
        }

        // Kiểm tra xem có bao nhiêu giá trị x xuất hiện 2 lần
        for (const auto& p : b) {
            if (p.second == 2) {
                ans += n - 2;
            }
        }

        // Kiểm tra các cặp giá trị theo điều kiện
        for (const auto& p : check) {
            if (check.count({p.first - 1, p.second ^ 1}) && check.count({p.first + 1, p.second ^ 1})) {
                ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
