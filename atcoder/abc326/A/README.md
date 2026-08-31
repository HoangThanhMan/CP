# 2UP3DOWN (ABC326 A)

- **Nguồn:** https://atcoder.jp/contests/abc326/tasks/abc326_a
- **Độ khó:** ABC A
- **Tags:** `implementation` `math`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Từ tầng X có thể đi thang bộ lên tối đa 2 tầng hoặc xuống tối đa 3 tầng. Hỏi đi từ X tới Y có dùng được thang bộ không.

## Quan sát

- Chỉ cần so sánh hướng đi rồi kiểm tra khoảng cách.

## Ý tưởng

Nếu `X > Y` (đi xuống) thì cần `X - Y <= 3`; ngược lại (đi lên) cần `Y - X <= 2`.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Đừng lẫn hai ngưỡng: **lên 2, xuống 3**.
- *(File này trước đây bị dán nhầm một chương trình quản lý sinh viên vào giữa, lời giải thật bị comment ở đầu — đã dọn lại.)*

## Bài học

Bài A của ABC thường chỉ là đọc kỹ đề. Viết ra hai điều kiện trước khi gõ.
