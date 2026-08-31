# PRIME — Trung bình nguyên tố trong đoạn (VNOI)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Vừa
- **Tags:** `segmented-sieve` `number-theory`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Nhiều truy vấn `[a, b]` với `b` rất lớn nhưng `b - a` nhỏ. Tính trung bình cộng các số nguyên tố trong đoạn.

## Quan sát

- Không sàng tới `b` được vì `b` quá lớn, nhưng `b - a` nhỏ -> dùng **sàng đoạn** (segmented sieve).
- Mọi hợp số trong `[a, b]` đều có ước nguyên tố `<= sqrt(b)`, nên chỉ cần sàng bằng các ước tới `sqrt(b)`.

## Ý tưởng

Với mỗi truy vấn, tạo mảng `isPrime` kích thước `b - a + 1` ứng với các số trong đoạn. Với mỗi `i` từ 2 tới `sqrt(b)`, đánh dấu các bội của `i` trong đoạn, bắt đầu từ `max(i*i, ceil(a/i)*i)`. Cộng các số còn lại rồi chia.

## Độ phức tạp

- Thời gian: `O((b - a) log log b + sqrt(b)) mỗi truy vấn`
- Bộ nhớ: `O(b - a)`

## Cạm bẫy

- Ánh xạ chỉ số `x -> x - a` phải nhất quán ở mọi chỗ.
- Xử lý riêng `a <= 1` vì 0 và 1 không nguyên tố.
- Nếu đoạn không có số nguyên tố nào thì `cnt = 0` -> **chia cho 0**. Code hiện tại chưa xử lý.

## Bài học

`b` lớn nhưng `b - a` nhỏ là chữ ký của sàng đoạn. Nhớ mẹo điểm bắt đầu `max(i*i, ((a + i - 1) / i) * i)`.
