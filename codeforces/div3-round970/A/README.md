# Sakurako's Exam (2008A)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 A
- **Tags:** `math` `parity` `constructive`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Có `a` số 1 và `b` số 2. Gán dấu `+` hoặc `-` cho từng số sao cho tổng bằng 0. Hỏi có làm được không.

## Quan sát

- Tổng các số 2 luôn chẵn, nên tổng các số 1 phải chẵn -> `a` phải chẵn.
- Nếu `b` lẻ thì phải dùng hai số 1 để bù lệch 2 -> cần `a >= 2`.

## Ý tưởng

YES khi `a` chẵn và (`b` chẵn hoặc `a > 0`); ngược lại NO.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Trường hợp `a = 0, b` lẻ là chỗ dễ sai nhất.

## Bài học

Bài chia tổng thành hai nửa bằng nhau luôn bắt đầu bằng câu hỏi chẵn lẻ: tổng lẻ thì chắc chắn không được.
