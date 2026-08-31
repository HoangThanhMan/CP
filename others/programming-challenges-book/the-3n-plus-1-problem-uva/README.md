# The 3n+1 Problem (UVa 100)

- **Nguồn:** https://onlinejudge.org/external/1/100.pdf
- **Độ khó:** Dễ
- **Tags:** `simulation` `recursion` `memoization`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Với dãy Collatz (n chẵn -> n/2, n lẻ -> 3n+1), tìm độ dài chu trình lớn nhất trong khoảng `[i, j]`.

## Quan sát

- Độ dài chu trình tính bằng đệ quy hoặc vòng lặp thẳng.
- `i` có thể lớn hơn `j` trong input — phải hoán đổi để duyệt, **nhưng vẫn in theo thứ tự gốc**.
- Nhiều giá trị lặp lại giữa các truy vấn -> nhớ hoá (memoization) tăng tốc rõ rệt.

## Ý tưởng

Hàm `solve(n)` trả độ dài chu trình. Duyệt mọi `l` trong `[min(i,j), max(i,j)]`, lấy max.

## Độ phức tạp

- Thời gian: `O((j - i) * độ dài chu trình)`
- Bộ nhớ: `O(1), hoặc O(giới hạn) nếu nhớ hoá`

## Cạm bẫy

- **Code hiện tại in `i` và `j` sau khi đã `swap`** — đề yêu cầu in lại đúng thứ tự đã nhập. Cần lưu bản gốc trước khi hoán đổi.
- `3n+1` có thể vượt `int` với n lớn — dùng `long long` cho biến trung gian.
- Đệ quy sâu có thể tràn stack; vòng `while` an toàn hơn.

## Bài học

Đề bảo 'in lại i và j' nghĩa là in **đúng như đã nhập**. Bẫy kinh điển của UVa 100.
