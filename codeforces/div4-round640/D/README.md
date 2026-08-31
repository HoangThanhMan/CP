# Alice and Bob (1352D)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 D
- **Tags:** `two-pointers` `simulation` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Hai người lần lượt ăn kẹo từ hai đầu dãy. Mỗi lượt phải ăn tổng **lớn hơn** tổng đối phương vừa ăn ở lượt trước. In số lượt và tổng mỗi người ăn được.

## Quan sát

- Mô phỏng trực tiếp bằng hai con trỏ `l` và `r` là đủ — mỗi phần tử chỉ bị tiêu thụ một lần.
- Điều kiện dừng lượt: ăn tới khi tổng vượt tổng lượt trước, hoặc hết kẹo.

## Ý tưởng

Hai con trỏ, biến `tmp` giữ tổng lượt trước, cờ `turn` đổi lượt. Mỗi lượt cộng từ đầu tương ứng tới khi `total > tmp` hoặc `l > r`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Điều kiện `while(total <= tmp && l <= r)` phải kiểm tra **cả hai**, nếu không sẽ vượt mảng.
- Lượt cuối có thể không đạt đủ tổng nhưng vẫn được tính là một lượt.

## Bài học

Ăn từ hai đầu dãy = two pointers. Tổng công việc vẫn `O(N)` dù có vòng lặp lồng, vì mỗi phần tử chỉ bị chạm một lần.
