# Speeding Ticket

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `simulation` `prefix-sum`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Đường dài 100 dặm, chia thành các đoạn có giới hạn tốc độ, và chia (khác cách) thành các đoạn Bessie chạy với tốc độ nào. Tìm mức vượt tốc lớn nhất.

## Quan sát

- Đường chỉ dài 100 dặm — **rải phẳng theo từng dặm** là cách đơn giản nhất, xoá sạch việc phải ghép hai cách chia đoạn khác nhau.

## Ý tưởng

Tạo mảng `lim[100]` ghi giới hạn tốc độ của từng dặm. Sau đó duyệt các đoạn Bessie chạy, với mỗi dặm lấy `max(ans, tốc độ - lim[dặm])`.

## Độ phức tạp

- Thời gian: `O(100)`
- Bộ nhớ: `O(100)`

## Cạm bẫy

- Nếu đường dài `10^9` thì không rải phẳng được, phải dùng two pointers trên hai danh sách mốc.

## Bài học

Hai cách chia đoạn chồng lên nhau mà miền giá trị nhỏ: cứ rải phẳng ra từng đơn vị. Đơn giản hoá bài toán đổi lấy bộ nhớ — rất đáng khi giới hạn cho phép.
