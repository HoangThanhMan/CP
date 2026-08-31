# Preparing for the Contest (1914B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 B
- **Tags:** `constructive` `permutation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Dựng hoán vị của `1..n` có đúng `k` vị trí `i` mà `p[i] > p[i-1]` (số lần 'leo dốc').

## Quan sát

- Hoán vị giảm dần `n, n-1, ..., 1` có 0 lần leo dốc.
- Đưa `k` phần tử lớn nhất lên đầu theo thứ tự **tăng dần** rồi phần còn lại giảm dần cho đúng `k` lần leo.

## Ý tưởng

In `n-k, n-k+1, ..., n` (tăng dần, tạo `k` lần leo), rồi `n-k-1, n-k-2, ..., 1` (giảm dần).

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Đếm chính xác số lần leo: chỗ nối giữa hai phần là một lần **giảm**, không tính thêm.
- Trường hợp `k = 0` và `k = n-1` nên kiểm tra tay.

## Bài học

Bài dựng hoán vị theo số lần tăng/giảm: ghép một đoạn tăng với một đoạn giảm. Đếm cẩn thận chỗ nối là xong.
