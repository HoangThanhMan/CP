# Bishop (Panasonic PC 2020 B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** B
- **Tags:** `math` `combinatorics`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Bàn cờ `H x W`. Quân tượng đi chéo. Đếm số ô quân tượng có thể đứng, tức số ô cùng màu với ô xuất phát.

## Quan sát

- Nếu `H == 1` hoặc `W == 1` thì tượng không đi đâu được — đáp án là 1. Đây là trường hợp biên bắt buộc phải tách.
- Ngược lại, đáp án là số ô cùng màu, tức `ceil(H*W / 2)`.

## Ý tưởng

`H == 1 || W == 1` -> in 1. Ngược lại in `(H * W + 1) / 2`.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- **`H * W` có thể tới `10^18` — phải dùng `long long`.** Code đã dùng đúng.
- Trường hợp biên `H == 1` hoặc `W == 1` là chỗ hầu hết mọi người mất WA đầu tiên.
- Công thức trong code viết vòng vo `((H+1)/2)*W - (H&1)*W/2`; `(H*W + 1) / 2` gọn và dễ soát hơn.

## Bài học

Bài công thức đóng: sau khi tìm ra công thức, luôn tự hỏi 'kích thước 1 thì sao?'. Đó gần như luôn là trường hợp biên bị bỏ sót.
