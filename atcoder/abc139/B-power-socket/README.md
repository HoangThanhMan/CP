# Power Socket (ABC139 B)

- **Nguồn:** https://atcoder.jp/contests/abc139/tasks/abc139_b
- **Độ khó:** ABC B
- **Tags:** `math` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Một ổ cắm có A lỗ. Mỗi ổ nối thêm chiếm 1 lỗ và cung cấp A lỗ mới, tức lãi ròng `A - 1` lỗ. Cần ít nhất bao nhiêu ổ để có B lỗ dùng được?

## Quan sát

- Bắt đầu với 1 lỗ (ổ trên tường). Mỗi ổ nối thêm làm tăng số lỗ dùng được đúng `A - 1`.
- Cần `1 + k*(A-1) >= B`, suy ra `k >= (B-1)/(A-1)`, làm tròn lên.

## Ý tưởng

In `ceil((B - 1) / (A - 1))`, viết bằng số nguyên là `(B - 1 + A - 2) / (A - 1)`.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- `A = 1` sẽ chia cho 0 — đề thường loại trường hợp này, nhưng nên kiểm tra ràng buộc.
- Mẫu làm tròn lên với số nguyên dương: `ceil(x/y) == (x + y - 1) / y`.

## Bài học

Thuộc lòng `(x + y - 1) / y` cho phép chia làm tròn lên — dùng liên tục và tránh được `ceil()` kiểu thực.
