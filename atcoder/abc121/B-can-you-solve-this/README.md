# Can You Solve This (ABC121 B)

- **Nguồn:** https://atcoder.jp/contests/abc121/tasks/abc121_b
- **Độ khó:** ABC B
- **Tags:** `implementation` `simulation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho N bài, mỗi bài một vector M chiều. Cho vector trọng số `b` và hằng số `c`. Đếm số bài mà tích vô hướng cộng `c` ra số dương.

## Quan sát

- Không có gì để tối ưu — chỉ là đọc và tính tích vô hướng.
- Có thể tính ngay khi đọc, không cần lưu cả ma trận.

## Ý tưởng

Với mỗi bài, cộng dồn `a[j] * b[j]`, cộng `c`, kiểm tra `> 0`.

## Độ phức tạp

- Thời gian: `O(N*M)`
- Bộ nhớ: `O(M)`

## Cạm bẫy

- Điều kiện là **lớn hơn 0**, không phải lớn hơn hoặc bằng.

## Bài học

Bài đọc-và-tính: xử lý ngay trong lúc đọc để khỏi tốn bộ nhớ lưu ma trận.
