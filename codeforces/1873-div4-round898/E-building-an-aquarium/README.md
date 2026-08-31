# Building an Aquarium (1873E)

- **Nguồn:** https://codeforces.com/contest/1873/problem/E
- **Độ khó:** Div4 E
- **Tags:** `binary-search-on-answer` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Các cột san hô cao `a[i]`, có `x` đơn vị nước. Chọn mực nước `h` sao cho tổng nước cần `sum(max(h - a[i], 0))` không vượt `x`. Tìm `h` lớn nhất.

## Quan sát

- Lượng nước cần là hàm **đơn điệu tăng** theo `h` — dấu hiệu kinh điển của binary search trên đáp án.
- Kiểm tra một `h` chỉ tốn `O(N)`.

## Ý tưởng

Tìm kiếm nhị phân `h` trong `[0, max(a) + x]`; hàm kiểm tra tính tổng nước cần và so với `x`.

## Độ phức tạp

- Thời gian: `O(N log(maxH))`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Tổng nước tràn `int`** — `h` tới `2*10^12`, phải `long long` cả `h` lẫn tổng. Code đã làm đúng.
- Mẫu binary search 'tìm giá trị lớn nhất còn thoả' phải dùng `mid = left + (right-left+1)/2` để tránh lặp vô hạn. Code đã dùng đúng.

## Bài học

'Tìm giá trị lớn nhất sao cho chi phí <= ngân sách' + chi phí đơn điệu = binary search trên đáp án. Nhận ra tính đơn điệu là toàn bộ độ khó.
