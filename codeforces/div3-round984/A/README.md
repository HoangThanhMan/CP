# Quintomania (2036A)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 A
- **Tags:** `implementation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Kiểm tra mọi cặp nốt liền nhau có cách nhau đúng 5 hoặc 7 nửa cung không.

## Ý tưởng

Quét một lượt, kiểm tra `|v[i] - v[i+1]|` thuộc `{5, 7}`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Bài học

Bài kiểm tra điều kiện trên mọi cặp liền kề: một vòng `for` và một cờ. Đơn giản nhưng phải đọc kỹ đề để không sót điều kiện.
