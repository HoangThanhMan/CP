# Square Pasture

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `geometry` `rectangles`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Hai bãi cỏ hình chữ nhật. Tìm diện tích hình vuông nhỏ nhất chứa được cả hai.

## Quan sát

- Hình vuông nhỏ nhất bao hai hình chữ nhật có cạnh bằng chiều lớn hơn trong hai chiều của hình chữ nhật bao chung.

## Ý tưởng

Tính hình chữ nhật bao chung: `x` từ `min(x1)` tới `max(x2)`, `y` từ `min(y1)` tới `max(y2)`. Cạnh hình vuông là `max(chiều rộng, chiều cao)`; đáp án là bình phương cạnh đó.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Kết quả là bình phương nên dễ tràn `int` nếu toạ độ lớn — kiểm tra ràng buộc trước.

## Bài học

'Hình vuông nhỏ nhất bao được X' hầu như luôn quy về bounding box rồi lấy cạnh dài hơn.
