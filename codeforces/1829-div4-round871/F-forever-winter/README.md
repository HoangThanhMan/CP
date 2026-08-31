# Forever Winter (1829F)

- **Nguồn:** https://codeforces.com/contest/1829/problem/F
- **Độ khó:** Div4 F
- **Tags:** `graphs` `degrees` `constructive`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Một đồ thị 'bông tuyết': một đỉnh trung tâm nối `x` đỉnh, mỗi đỉnh đó nối thêm `y` lá. Cho đồ thị đã xáo thứ tự đỉnh, khôi phục `x` và `y`.

## Quan sát

- Chỉ có ba loại bậc: trung tâm có bậc `x`, đỉnh giữa có bậc `y + 1`, lá có bậc 1.
- Bảng phân bố bậc là đủ để suy ngược ra `x` và `y` — không cần duyệt đồ thị.

## Ý tưởng

Đếm số đỉnh theo từng bậc. Từ bảng phân bố và tổng số cạnh `m`, suy ra `x` và `y`.

## Độ phức tạp

- Thời gian: `O(N + M log)`
- Bộ nhớ: `O(N + M)`

## Cạm bẫy

- Trường hợp `x == y + 1` khiến hai loại đỉnh có cùng bậc — phải xét riêng.
- Cách chắc chắn hơn suy luận từ bậc: tìm đỉnh bậc 1 (lá), đi lên cha nó (đỉnh giữa), rồi lên cha nữa (trung tâm); `x` và `y` đọc thẳng từ bậc của hai đỉnh đó.
- Đồ thị khai báo `vector<int> g[200]` nhưng `n` có thể tới `2*10^5` — **tràn mảng**. Cần sửa.

## Bài học

Với đồ thị có cấu trúc cố định, **bảng phân bố bậc** thường chứa đủ thông tin để khôi phục tham số.
