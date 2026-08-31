# Room Allocation (CSES)

- **Nguồn:** https://cses.fi/problemset/task/1164
- **Độ khó:** CSES Sorting & Searching
- **Tags:** `heap` `greedy` `sweep` `intervals`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

N khách, mỗi người ở từ ngày `a` tới ngày `b`. Cần ít phòng nhất, và in ra phòng gán cho từng khách.

## Quan sát

- Sắp xếp theo ngày đến. Khi một khách mới tới, nếu có phòng mà khách cũ đã trả trước đó thì tái sử dụng; không thì mở phòng mới.
- 'Phòng trả sớm nhất' là truy vấn min -> dùng **min-heap theo ngày đi**.
- Số phòng cần chính là số khoảng chồng nhau nhiều nhất.

## Ý tưởng

Sắp xếp khách theo ngày đến (nhớ giữ chỉ số gốc để in đúng thứ tự). Duy trì min-heap các cặp `(ngày đi, số phòng)`. Với mỗi khách: nếu đỉnh heap có ngày đi `< ngày đến` thì lấy lại phòng đó, ngược lại cấp phòng mới. Đáp án là kích thước heap lớn nhất.

## Độ phức tạp

- Thời gian: `O(N log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Phải lưu chỉ số gốc trước khi sắp xếp**, vì đáp án phải in theo thứ tự input.
- C++ `priority_queue` mặc định là max-heap; đẩy giá trị âm (như code đang làm) hoặc dùng `greater<>` để thành min-heap.
- Điều kiện là ngày đi `<` ngày đến hay `<=` tuỳ đề định nghĩa khoảng đóng/mở — đọc kỹ.

## Bài học

'Ít tài nguyên nhất để phục vụ các khoảng thời gian' = sắp xếp theo thời điểm bắt đầu + min-heap theo thời điểm kết thúc. Mẫu này dùng lại cho Meeting Rooms II, CPU scheduling, ...
