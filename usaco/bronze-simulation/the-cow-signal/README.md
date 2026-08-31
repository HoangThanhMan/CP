# The Cow Signal

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `implementation` `grid`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho lưới `M x N` ký tự, phóng to mỗi ô thành khối `K x K` rồi in ra.

## Quan sát

- Mỗi ô nguồn `(i, j)` sinh ra `K x K` ô đích — chỉ là bốn vòng lặp lồng nhau.

## Ý tưởng

Với mỗi hàng `i`, in hàng đó `K` lần; trong mỗi lần, với mỗi cột `j` in ký tự `a[i][j]` lặp `K` lần.

## Độ phức tạp

- Thời gian: `O(M*N*K^2)`
- Bộ nhớ: `O(M*N)`

## Cạm bẫy

- Thứ tự vòng lặp phải là hàng -> lặp hàng -> cột -> lặp cột. Đặt sai thứ tự sẽ ra ảnh bị xoay/lệch.

## Bài học

Bài phóng to lưới: viết rõ 'vòng nào chạy theo cái gì' trước khi gõ, đừng gõ theo cảm giác.
