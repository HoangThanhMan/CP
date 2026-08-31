# Can I Square? (1915C)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 C
- **Tags:** `math` `binary-search` `precision`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Tổng mảng có phải số chính phương không.

## Quan sát

- Tổng có thể tới `10^18` nên `sqrt()` kiểu `double` không đủ chính xác.
- Dùng **binary search trên số nguyên** để tìm căn — vừa chính xác vừa nhanh.

## Ý tưởng

Cộng tổng bằng `long long`, binary search `mid` trong `[1, 10^9]` tìm `mid*mid == sum`.

## Độ phức tạp

- Thời gian: `O(N + log)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- **`mid * mid` có thể tràn `long long`** nếu cận trên đặt quá cao — với cận `10^9` thì `10^18` vẫn vừa, nhưng phải tính trước.
- Đây chính là lý do không dùng `sqrt()`: ở cỡ `10^18`, `double` chỉ có 53 bit mantissa.

## Bài học

Kiểm tra số chính phương với số lớn: **binary search số nguyên**, đừng `sqrt`. Và luôn kiểm tra cận trên của binary search không làm tràn khi bình phương.
