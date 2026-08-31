# Codeforces Round 988 Div3 — A

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 A
- **Tags:** `counting` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Cho dãy số, đếm số cặp phần tử bằng nhau ghép được (mỗi giá trị góp `tần suất / 2` cặp).

## Ý tưởng

Đếm tần suất bằng map, cộng `tần suất / 2` cho mỗi giá trị.

## Độ phức tạp

- Thời gian: `O(N log N)`
- Bộ nhớ: `O(N)`

## Bài học

'Ghép cặp các phần tử giống nhau' = tổng của `count / 2`. Phần dư lẻ là số phần tử không ghép được.
