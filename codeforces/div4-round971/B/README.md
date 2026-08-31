# osu!mania (2009B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 B
- **Tags:** `implementation` `grid`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Lưới `n x 4`, mỗi hàng có đúng một ô `#`. In chỉ số cột của các ô `#` theo thứ tự **từ dưới lên**.

## Quan sát

- Chỉ cần đọc rồi duyệt hàng theo thứ tự ngược.

## Ý tưởng

Đọc `n` chuỗi, duyệt `i` từ `n-1` về 0, in vị trí ký tự `#` cộng 1.

## Độ phức tạp

- Thời gian: `O(4N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Code in dấu cách hay xuống dòng tuỳ theo `i == 0` — cách này hoạt động nhưng dễ hỏng nếu đổi thứ tự. In dấu cách sau mỗi số rồi một `\n` cuối cùng thì an toàn hơn.

## Bài học

Đề nói 'từ dưới lên' thì duyệt ngược, đừng đọc ngược. Tách rõ 'đọc' và 'xử lý' giúp ít lỗi hơn.
