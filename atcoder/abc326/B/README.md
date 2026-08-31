# 326-like Numbers (ABC326 B)

- **Nguồn:** https://atcoder.jp/contests/abc326/tasks/abc326_b
- **Độ khó:** ABC B
- **Tags:** `brute-force`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Tìm số nhỏ nhất `>= N` có 3 chữ số mà chữ số hàng trăm nhân chữ số hàng chục bằng chữ số hàng đơn vị.

## Quan sát

- Miền tìm kiếm chỉ từ `N` tới 999 — duyệt thẳng.
- Đề bảo đảm luôn tồn tại đáp án (919 thoả `9*1=9`), nên vòng lặp chắc chắn dừng.

## Ý tưởng

Duyệt `i` từ `N` đi lên, tách ba chữ số bằng phép chia và chia dư, in số đầu tiên thoả `b * c == a`.

## Độ phức tạp

- Thời gian: `O(1000)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Chặn trên phải đủ lớn; code chặn ở 919 vì đó là đáp án lớn nhất có thể — đúng nhưng phụ thuộc vào việc đã biết trước đáp án, để 999 an toàn hơn.

## Bài học

Miền chỉ vài nghìn giá trị: duyệt thẳng, đừng nghĩ công thức.
