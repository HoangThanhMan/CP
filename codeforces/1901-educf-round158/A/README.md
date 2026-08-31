# Line Trip (1901A)

- **Nguồn:** https://codeforces.com/contest/1901/problem/A
- **Độ khó:** Educational A
- **Tags:** `greedy` `math`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Đi từ 0 tới `x` rồi quay về 0. Có các trạm xăng ở các vị trí cho trước (đã sắp xếp). Tìm dung tích bình xăng nhỏ nhất cần có.

## Quan sát

- Bình phải đủ cho **khoảng cách xa nhất giữa hai trạm liên tiếp** (tính cả từ 0 tới trạm đầu).
- Chặng cuối đặc biệt: từ trạm cuối đi tới `x` rồi quay lại trạm cuối, tức `2 * (x - a[n-1])`, vì ở `x` không có trạm.

## Ý tưởng

Đáp án là `max(khoảng cách lớn nhất giữa hai trạm liên tiếp, 2 * (x - trạm cuối))`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Chặng cuối phải nhân 2** — đây là chỗ duy nhất khó của bài, quên là WA.
- Nhớ tính cả khoảng từ 0 tới trạm đầu tiên.

## Bài học

Bài 'đi và về': mọi chặng bình thường tính một lần, riêng chặng qua điểm quay đầu tính hai lần.
