# Raspberries (1883C)

- **Nguồn:** https://codeforces.com/contest/1883/problem/C
- **Độ khó:** Div3 C
- **Tags:** `math` `greedy` `case-analysis`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho mảng và `k` trong {2,3,4,5}. Mỗi thao tác tăng một phần tử lên 1. Tìm số thao tác ít nhất để tích cả mảng chia hết cho `k`.

## Quan sát

- `k` nguyên tố (2, 3, 5): chỉ cần **một** phần tử chia hết cho `k`; chi phí là `min(k - a[i] % k)` qua mọi `i`.
- `k = 4` là trường hợp đặc biệt: cần hoặc một phần tử chia hết 4, hoặc **hai** phần tử chẵn.
- Đó là lý do code có nhánh `if (k == 4)` riêng.

## Ý tưởng

Tính `min(k - a[i] % k)` thông thường. Nếu `k == 4` thì xét thêm phương án dùng hai số chẵn: đếm số phần tử đã chẵn và chi phí để có đủ hai số chẵn, lấy min.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Quên `k = 4` là lỗi phổ biến nhất của bài này — 4 không nguyên tố nên lập luận 'một phần tử' sập.
- Phần tử đã chia hết `k` cho chi phí 0, phải xét trước.

## Bài học

Chia hết cho `k` không nguyên tố thì **không** quy về một phần tử được — phải phân tích `k` ra thừa số nguyên tố và phân bổ số mũ giữa nhiều phần tử.
