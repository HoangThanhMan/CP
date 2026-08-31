# Codeforces 1881B

- **Nguồn:** https://codeforces.com/contest/1881/problem/B
- **Độ khó:** Div3 B
- **Tags:** `math` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Cho ba số. Code sắp xếp chúng rồi kiểm tra hai số lớn có chia hết cho số nhỏ nhất không, và tổng số phép (mỗi phép nhân đôi hoặc tương tự) có `<= 3` không.

## Quan sát

- Sắp xếp trước giúp cố định vai trò 'số nhỏ nhất làm mốc'.

## Ý tưởng

Sắp xếp `a[0] <= a[1] <= a[2]`. Điều kiện: `a[1] % a[0] == 0 && a[2] % a[0] == 0` và `(a[1]/a[0] - 1) + (a[2]/a[0] - 1) <= 3`.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Cần đối chiếu lại điều kiện `<= 3` với đề gốc để chắc chắn ngưỡng đúng.

## Bài học

Bài ba số nhỏ: sắp xếp để cố định vai trò, rồi điều kiện thường rút gọn về vài phép chia dư.
