# KPRIME — Đếm đoạn có đúng K số nguyên tố (VNOI)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Vừa
- **Tags:** `sieve` `two-pointers` `sliding-window` `counting`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho `n` và `k`. Đếm số đoạn `[l, r]` con của `[1, n]` chứa **ít nhất** `k` số nguyên tố.

## Quan sát

- Sàng trước để biết số nào nguyên tố.
- Với mỗi `l`, tồn tại `r` nhỏ nhất sao cho `[l, r]` có đủ `k` nguyên tố; khi đó **mọi** `r' >= r` đều hợp lệ, đóng góp `n - r + 1` đoạn.
- Khi `l` tăng thì `r` không bao giờ giảm -> two pointers, tổng `O(n)`.

## Ý tưởng

Sàng Eratosthenes tới `n`. Chạy hai con trỏ: với mỗi `l`, đẩy `r` tới khi đếm đủ `k` nguyên tố, cộng `n - r + 1` vào đáp án; rồi bỏ `l` khỏi cửa sổ (giảm bộ đếm nếu `l` nguyên tố).

## Độ phức tạp

- Thời gian: `O(n log log n)`
- Bộ nhớ: `O(n)`

## Cạm bẫy

- Khi `r` vượt `n` mà vẫn chưa đủ `k` nguyên tố thì phải `break` — mọi `l` sau đó cũng không đủ.
- Đáp án cỡ `n^2` nên bắt buộc `long long`.

## Bài học

Mẫu 'đếm đoạn thoả điều kiện đơn điệu': với mỗi `l` tìm `r` nhỏ nhất rồi cộng `n - r + 1`. Dùng được mỗi khi điều kiện càng mở rộng đoạn càng dễ thoả.
