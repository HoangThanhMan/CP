# Diamond Collector

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `sorting` `two-pointers`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho N viên kim cương với kích thước. Chọn một nhóm sao cho hiệu kích thước lớn nhất và nhỏ nhất không quá K. Tìm nhóm lớn nhất có thể.

## Quan sát

- Nhóm tối ưu luôn là một **đoạn liên tiếp sau khi sắp xếp** — vì nếu đã lấy hai đầu thì lấy hết mọi thứ ở giữa không tốn gì.
- Sau khi sắp xếp, điều kiện thành `v[j] - v[i] <= K`.

## Ý tưởng

Sắp xếp mảng, rồi với mỗi `i` tìm `j` xa nhất mà `v[j] - v[i] <= K`; đáp án là `max(j - i + 1)`. Vì `j` chỉ tăng khi `i` tăng nên có thể dùng two pointers để về `O(N)` sau sắp xếp.

## Độ phức tạp

- Thời gian: `O(N log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Code hiện tại dùng vòng trong `O(N)` -> tổng `O(N^2)`; đủ qua với `N <= 5*10^4` giới hạn nhỏ nhưng nên đổi sang two pointers cho chắc.

## Bài học

'Chọn nhóm sao cho max - min <= K' luôn quy về: **sắp xếp trước**, rồi bài toán biến thành cửa sổ trượt.
