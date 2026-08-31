# Good Kid (1873B)

- **Nguồn:** https://codeforces.com/contest/1873/problem/B
- **Độ khó:** Div4 B
- **Tags:** `greedy` `math`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho các chữ số, cộng 1 vào đúng một chữ số để tích của tất cả lớn nhất.

## Quan sát

- Cộng 1 vào chữ số **nhỏ nhất** là tối ưu: tỉ lệ tăng `(x+1)/x` lớn nhất khi `x` nhỏ nhất.
- Trường hợp có số 0: cộng vào chính số 0 đó biến tích từ 0 thành khác 0 — cũng nằm trong quy tắc trên.

## Ý tưởng

Sắp xếp, cộng 1 vào phần tử đầu, nhân tất cả lại.

## Độ phức tạp

- Thời gian: `O(N log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Nếu có **nhiều** số 0 thì tích vẫn là 0 dù cộng vào đâu — quy tắc vẫn cho đáp án đúng, không cần xét riêng.
- Mảng khai báo `int a[10]` — chỉ đúng vì đề giới hạn `n <= 9`.

## Bài học

Bài 'cộng 1 vào một phần tử để tích lớn nhất': luôn chọn phần tử nhỏ nhất. Chứng minh bằng cách so sánh tỉ lệ `(x+1)/x`.
