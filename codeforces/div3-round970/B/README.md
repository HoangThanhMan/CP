# Square or Not (2008B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 B
- **Tags:** `strings` `grid` `implementation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Chuỗi nhị phân độ dài `n`. Hỏi nó có phải là cách đọc theo hàng của một lưới vuông có viền toàn 1 và ruột toàn 0 không.

## Quan sát

- `n` phải là số chính phương, cạnh là `sqrt(n)`.
- Sau đó chỉ cần kiểm tra từng ô: ở viền phải là '1', trong ruột phải là '0'.

## Ý tưởng

Kiểm tra `r*r == n`. Duyệt `(i, j)`, ô ở viền (`i==0 || j==0 || i==r-1 || j==r-1`) phải là '1', còn lại phải là '0'.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- `sqrt(n)` trả `double`, với `n` lớn có thể lệch 1 — nên `int r = round(sqrt(n))` rồi kiểm tra `r*r == n`.
- Ánh xạ 1 chiều sang 2 chiều là `s[i * r + j]` — nhầm thành `s[j * r + i]` là sai.

## Bài học

Chuỗi 1 chiều biểu diễn lưới: nhớ công thức `index = hàng * số_cột + cột`. Và luôn kiểm tra `n` có phải số chính phương bằng số nguyên.
