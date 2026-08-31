from typing import Dict, List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen: Dict[int, int] = {}  # giá trị -> chỉ số
        for i, x in enumerate(nums):
            if target - x in seen:
                return [seen[target - x], i]
            seen[x] = i  # ghi SAU khi tra
        return []


if __name__ == "__main__":
    print(Solution().twoSum([2, 7, 11, 15], 9))  # [0, 1]
