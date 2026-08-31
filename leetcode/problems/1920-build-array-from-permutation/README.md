# Build Array from Permutation

- **Nguồn:** https://leetcode.com/problems/build-array-from-permutation/
- **Độ khó:** Easy
- **Tags:** `array` `simulation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho hoán vị `nums`, trả về mảng `ans` với `ans[i] = nums[nums[i]]`.

## Quan sát

- Dịch thẳng đề bài thành code — không có bẫy thuật toán.
- Phần thú vị là biến thể follow-up: làm với `O(1)` bộ nhớ phụ.

## Ý tưởng

Cấp phát mảng mới rồi gán `v[i] = nums[nums[i]]`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Nếu làm tại chỗ để đạt `O(1)` bộ nhớ thì **không được ghi đè** `nums[i]` trước khi các vị trí khác đọc xong. Mẹo: nhồi hai giá trị vào một ô bằng `nums[i] += n * (nums[nums[i]] % n)` rồi chia `n` ở lượt hai.

## Bài học

Mẹo 'nhồi hai số vào một ô bằng phép chia dư' là cách kinh điển để biến bài `O(N)` bộ nhớ thành `O(1)` bộ nhớ khi giá trị bị chặn.
