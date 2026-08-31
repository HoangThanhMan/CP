# The Lakes (1829E)

- **Nguồn:** https://codeforces.com/contest/1829/problem/E
- **Độ khó:** Div4 E
- **Tags:** `bfs` `dfs` `grid` `connected-components`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Lưới với độ sâu nước ở mỗi ô (0 là đất). Một hồ là một thành phần liên thông 4 hướng các ô có nước. Tìm hồ có tổng thể tích lớn nhất.

## Quan sát

- Đây là bài **thành phần liên thông trên lưới** kinh điển.
- Có thể dùng chính lưới làm mảng đánh dấu: gán ô đã thăm về 0, khỏi cần mảng `visited` riêng.

## Ý tưởng

Duyệt mọi ô; gặp ô có nước chưa thăm thì BFS/DFS lan ra, cộng dồn độ sâu và gán các ô đã thăm về 0. Lấy max tổng qua các thành phần.

## Độ phức tạp

- Thời gian: `O(N*M)`
- Bộ nhớ: `O(N*M)`

## Cạm bẫy

- **Phải đánh dấu ô ngay lúc đẩy vào hàng đợi**, không phải lúc lấy ra — nếu không cùng một ô bị đẩy nhiều lần. Code làm đúng (gán 0 ngay khi đẩy).
- Tổng thể tích dễ tràn `int` khi lưới lớn.
- Lưới khai báo tĩnh `1000x1000` mà `t` test liên tiếp — nhớ reset hoặc đảm bảo đã gán 0 hết.

## Bài học

Flood fill trên lưới: mảng hướng `dr/dc`, hàm `is_valid`, đánh dấu khi đẩy vào hàng đợi. Ba thứ đó là khung cố định.
