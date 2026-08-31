#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;  // giá trị -> chỉ số
        for (int i = 0; i < (int)nums.size(); ++i) {
            auto it = seen.find(target - nums[i]);
            if (it != seen.end()) return {it->second, i};
            seen[nums[i]] = i;  // ghi SAU khi tra, tránh ghép với chính nó
        }
        return {};  // đề bảo đảm luôn có đáp án
    }
};

// int main() {
//     Solution s;
//     vector<int> nums{2, 7, 11, 15};
//     auto r = s.twoSum(nums, 9);
//     cout << r[0] << ' ' << r[1] << '\n';  // 0 1
// }
