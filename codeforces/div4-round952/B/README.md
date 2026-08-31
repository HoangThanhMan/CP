# Maximum Multiple Sum (1985B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 B
- **Tags:** `brute-force` `math`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Tìm `x` trong `[2, n]` sao cho tổng các bội của `x` không vượt `n` là lớn nhất.

## Quan sát

- Tổng bội của `x` là `x * (1 + 2 + ... + k)` với `k = n / x`, tức `x * k(k+1)/2`.
- `n` nhỏ nên duyệt mọi `x` và tính trực tiếp là đủ.

## Ý tưởng

Duyệt `x` từ 2 tới `n`, tính `x * k(k+1)/2` với `k = n/x`, giữ `x` cho tổng lớn nhất.

## Độ phức tạp

- Thời gian: `O(N log N) như code, O(N) nếu dùng công thức`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- **Code duyệt cả `j`** thay vì dùng công thức tổng — thành `O(N log N)`, vẫn kịp nhưng thừa.
- Tổng có thể tràn `int` với `n` lớn.

## Bài học

Tổng `1 + 2 + ... + k = k(k+1)/2` — dùng công thức thay vì vòng lặp, gần như luôn giảm một bậc độ phức tạp.
