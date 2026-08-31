# Two Vessels (1872A)

- **Nguồn:** https://codeforces.com/contest/1872/problem/A
- **Độ khó:** Div3 A
- **Tags:** `math` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Hai bình nước `a` và `b`, mỗi lần chuyển được `c` đơn vị. Cần ít nhất bao nhiêu lần để hai bình bằng nhau.

## Quan sát

- Mỗi lần chuyển làm chênh lệch giảm `2c` (bên cho giảm c, bên nhận tăng c).
- Đáp án là `ceil(|a - b| / (2c))`.

## Ý tưởng

In `ceil(|a - b| / (2c))`.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- **Code dùng `double` và `ceil()`** — với giá trị lớn sẽ sai làm tròn. Nên viết bằng số nguyên: `(|a-b| + 2*c - 1) / (2*c)`.

## Bài học

Lại là bài chia làm tròn lên. Dùng số nguyên, đừng dùng `ceil()`.
