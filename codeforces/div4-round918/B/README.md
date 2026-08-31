# Not Quite Latin Square (1915B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 B
- **Tags:** `grid` `implementation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Lưới 3x3 mà mỗi hàng lẽ ra chứa đủ A, B, C nhưng một ô bị thay bằng `?`. Tìm ký tự bị thiếu.

## Quan sát

- Chỉ cần tìm hàng chứa `?` rồi xem ký tự nào vắng mặt trong hàng đó.

## Ý tưởng

Với mỗi hàng, đánh dấu các ký tự xuất hiện; hàng nào thiếu một trong A/B/C thì đó là đáp án.

## Độ phức tạp

- Thời gian: `O(9)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- **Code không reset `res` giữa các hàng** — nó ghi đè liên tục nên chỉ đúng nhờ hàng có `?` là hàng cuối cùng thiếu ký tự. Nên `break` ngay khi tìm thấy để rõ ý.

## Bài học

Trong bài nhiều test/nhiều hàng, luôn tự hỏi 'biến này đã được reset chưa?'. Biến sót lại từ vòng trước là lỗi phổ biến nhất và khó thấy nhất.
