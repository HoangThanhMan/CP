# Short Sort (1873A)

- **Nguồn:** https://codeforces.com/contest/1873/problem/A
- **Độ khó:** Div4 A
- **Tags:** `strings` `brute-force`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho hoán vị của `abc`, hỏi có thể đưa về `abc` bằng nhiều nhất một phép hoán đổi không.

## Quan sát

- Chỉ 6 hoán vị — đáp án là 'không' đúng với hai hoán vị vòng `bca` và `cab`.
- Tương đương: có ít nhất một ký tự đã đúng chỗ.

## Ý tưởng

Kiểm tra `s[0]=='a' || s[1]=='b' || s[2]=='c'`.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Với chuỗi dài hơn 3 thì mẹo này sai; khi đó phải đếm số vị trí lệch và kiểm tra `<= 2`.

## Bài học

Miền chỉ vài trường hợp: liệt kê hết ra giấy rồi tìm điều kiện gọn nhất.
