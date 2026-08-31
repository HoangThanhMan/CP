# Bingo (ABC157 B)

- **Nguồn:** https://atcoder.jp/contests/abc157/tasks/abc157_b
- **Độ khó:** ABC B
- **Tags:** `implementation` `grid`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Bảng bingo 3x3 và một danh sách số được gọi. Hỏi có hàng, cột hoặc đường chéo nào bị đánh dấu hết không.

## Quan sát

- Chỉ có 8 đường thắng: 3 hàng, 3 cột, 2 đường chéo.
- Dùng `map<int,bool>` đánh dấu ô đã bị gọi là gọn nhất, khỏi cần tìm kiếm.

## Ý tưởng

Đánh dấu mọi số được gọi vào map. Sau đó kiểm tra 8 đường xem đường nào có đủ 3 ô được đánh dấu.

## Độ phức tạp

- Thời gian: `O(N + 9)`
- Bộ nhớ: `O(9)`

## Cạm bẫy

- Dễ quên hai đường chéo.
- Code hiện tại gộp việc đếm hàng/cột/chéo vào cùng một vòng lặp nên khó đọc; tách thành hàm `checkLine()` riêng sẽ ít lỗi hơn.

## Bài học

Với lưới nhỏ cố định, liệt kê tường minh mọi đường thắng rõ ràng hơn là cố viết vòng lặp tổng quát.
