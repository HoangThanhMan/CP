# Minesweeper (UVa 10189)

- **Nguồn:** https://onlinejudge.org/external/101/10189.pdf
- **Độ khó:** Dễ
- **Tags:** `grid` `implementation` `directions`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho lưới dò mìn với `*` là mìn và `.` là ô trống, thay mỗi ô trống bằng số mìn trong 8 ô kề nó.

## Quan sát

- Mảng hướng `dx[8], dy[8]` là cách gọn nhất để duyệt 8 ô kề.
- Nhiều bộ test liên tiếp, kết thúc bởi `0 0` — nhớ định dạng output có dòng trống giữa các bộ.

## Ý tưởng

Với mỗi ô không phải mìn, đếm số ô kề (trong 8 hướng, có kiểm tra biên) là `*`, in ra số đó.

## Độ phức tạp

- Thời gian: `O(M*N*8)`
- Bộ nhớ: `O(M*N)`

## Cạm bẫy

- Định dạng output của UVa rất khó tính: `Field #x:` rồi lưới, và **dòng trống giữa các bộ test nhưng không có sau bộ cuối** — sai chỗ này là Presentation Error.
- Luôn kiểm tra biên trước khi truy cập `a[x][y]`.

## Bài học

Mảng `dx/dy` là công cụ chuẩn cho mọi bài lưới. Với UVa, đọc kỹ định dạng output cũng quan trọng ngang thuật toán.
