# A^A (ABC327 B)

- **Nguồn:** https://atcoder.jp/contests/abc327/tasks/abc327_b
- **Độ khó:** ABC B
- **Tags:** `math` `brute-force`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho B, tìm A sao cho `A^A = B`, hoặc in -1 nếu không có.

## Quan sát

- `B <= 10^18`, mà `16^16 ≈ 1.8 * 10^19` đã vượt — nên A chỉ có thể từ 1 tới 15.
- Miền tìm kiếm cực nhỏ, duyệt là xong.

## Ý tưởng

Duyệt A từ 1 tới 16, tính `A^A` bằng nhân lặp kiểu `long long`, so sánh với B.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- **Không dùng `pow()`** — nó trả `double`, mất chính xác ở cỡ `10^18`. Code hiện tại dùng `1ll*pow(i,i)`, đây là lỗi tiềm ẩn. Phải nhân lặp bằng `long long`.
- Phép nhân lặp cũng có thể tràn — nên dừng ngay khi vượt B.

## Bài học

Hàm luỹ thừa tăng cực nhanh -> miền tìm kiếm cực nhỏ -> duyệt. Và luôn tránh `pow()` với số nguyên lớn.
