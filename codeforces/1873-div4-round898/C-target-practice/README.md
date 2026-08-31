# Target Practice (1873C)

- **Nguồn:** https://codeforces.com/contest/1873/problem/C
- **Độ khó:** Div4 C
- **Tags:** `grid` `implementation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Bia 10x10 gồm 5 vòng đồng tâm, vòng ngoài 1 điểm tới vòng trong 5 điểm. Tính tổng điểm các mũi tên `X`.

## Quan sát

- Ô `(i, j)` thuộc vòng thứ `k = min(i, j, 9-i, 9-j)`, điểm là `k + 1`.
- Công thức này gọn hơn nhiều so với viết 5 điều kiện.

## Ý tưởng

Với mỗi ô `X`, cộng `min(i, j, 9-i, 9-j) + 1` vào tổng.

## Độ phức tạp

- Thời gian: `O(100)`
- Bộ nhớ: `O(100)`

## Cạm bẫy

- Code dùng vòng `k` và `break` để tìm vòng — đúng nhưng dài; công thức `min` bốn số ngắn hơn hẳn.

## Bài học

Trên lưới vuông, 'vòng thứ mấy tính từ ngoài vào' luôn là `min(i, j, n-1-i, n-1-j)`. Nhớ để dùng lại.
