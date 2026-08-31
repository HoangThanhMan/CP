# Quests (1914C)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 C
- **Tags:** `greedy` `sorting` `prefix-sum`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Mỗi nhiệm vụ cho `a` điểm lần đầu và `b` điểm các lần sau. Với `n` lượt chơi, tối đa hoá tổng điểm.

## Quan sát

- Nhiệm vụ nên xếp theo `a - b` giảm dần: ưu tiên làm lần đầu những nhiệm vụ có phần thưởng lần đầu vượt trội.
- Sau khi cố định thứ tự, dùng tổng tiền tố để cộng nhanh.

## Ý tưởng

Sắp xếp theo `a[i] - b[i]` giảm dần, cộng dồn `a` theo thứ tự đó; với `k` lượt đầu cộng thêm tổng tiền tố tương ứng.

## Độ phức tạp

- Thời gian: `O(N log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Tổng điểm dễ tràn `int` — code đã dùng `long long`, đúng.
- Cần đối chiếu lại công thức cộng dồn với đề gốc, phần `if (i < k)` không hiển nhiên.

## Bài học

Bài 'chọn thứ tự để tối ưu tổng': hầu như luôn sắp xếp theo **hiệu** của hai phương án (`a - b`), không phải theo giá trị tuyệt đối.
