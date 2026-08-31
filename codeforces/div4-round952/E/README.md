# Secret Box (1985E)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 E
- **Tags:** `brute-force` `divisors` `combinatorics`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Hộp `x * y * z`. Đặt vào một hộp con nguyên có thể tích đúng `k`, cạnh nguyên, song song trục. Đếm số vị trí đặt được nhiều nhất.

## Quan sát

- Cạnh `a`, `b`, `c` phải là **ước của `k`** với `a*b*c = k`.
- Số vị trí đặt là `(x-a+1) * (y-b+1) * (z-c+1)`.
- Số ước của `k` nhỏ, nên duyệt cặp `(a, b)` rồi suy `c = k/(a*b)`.

## Ý tưởng

Liệt kê ước của `k`. Duyệt mọi cặp ước `(a, b)` với `a <= x`, `b <= y` và `a*b` chia hết `k`; tính `c` và kiểm tra `c <= z`; lấy max số vị trí.

## Độ phức tạp

- Thời gian: `O(d(k)^2)`
- Bộ nhớ: `O(d(k))`

## Cạm bẫy

- **`a * b` có thể tràn** trước khi chia — kiểm tra `a > k / b` trước.
- Tích ba thừa số `(x-a+1)*(y-b+1)*(z-c+1)` chắc chắn cần `long long`.
- Liệt kê ước bằng vòng `i*i <= n` và thêm cả `n/i`, nhớ tránh thêm hai lần khi `i*i == n`. Code làm đúng.

## Bài học

Bài 'ba thừa số có tích cho trước': duyệt hai thừa số, thừa số thứ ba suy ra. Số ước của `k <= 10^18` vẫn chỉ cỡ vài nghìn.
