# 121 (ABC086 B)

- **Nguồn:** https://atcoder.jp/contests/abc086/tasks/abc086_b
- **Độ khó:** ABC B
- **Tags:** `math` `implementation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho hai số a và b, nối chuỗi biểu diễn của chúng thành một số. Hỏi số đó có phải số chính phương không.

## Quan sát

- Nối chuỗi = `a * 10^(số chữ số của b) + b`.
- Kiểm tra chính phương: lấy căn rồi bình phương lại so sánh.

## Ý tưởng

Đếm số chữ số của `b` bằng cách chia 10 liên tục, dựng số `c`, rồi kiểm tra `sqrt(c)` bình phương lên có bằng `c` không.

## Độ phức tạp

- Thời gian: `O(log b)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- `sqrt()` và `pow()` trả `double` nên có sai số — với số lớn, `sqrt(c)` có thể ra `k-1` thay vì `k`. An toàn hơn: `long long s = llround(sqrt((long double)c));` rồi thử cả `s-1, s, s+1`.
- Cách chắc chắn nhất là nối chuỗi bằng `to_string(a) + to_string(b)` rồi `stoll`, khỏi lo `pow`.

## Bài học

Tránh `pow`/`sqrt` kiểu thực trong bài số nguyên. Nối chuỗi thì cứ dùng string cho thật.
