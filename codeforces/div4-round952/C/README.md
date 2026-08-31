# Good Prefixes (1985C)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 C
- **Tags:** `prefix-sum` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Tiền tố gọi là 'tốt' nếu có một phần tử bằng tổng các phần tử còn lại. Đếm số tiền tố tốt.

## Quan sát

- Phần tử đó bắt buộc phải là **phần tử lớn nhất** của tiền tố.
- Điều kiện thành: `tổng - max == max`, tức `tổng == 2 * max`.
- Cả tổng lẫn max đều cập nhật được trong một lượt quét.

## Ý tưởng

Quét một lượt, giữ `sum` và `max` chạy; đếm số vị trí thoả `sum == 2 * max`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Tổng dễ tràn `int`** — code dùng `long long`, đúng.
- Tiền tố độ dài 1 với phần tử 0 cũng thoả (`0 == 2*0`) — đừng loại nhầm.

## Bài học

'Một phần tử bằng tổng phần còn lại' luôn quy về `tổng == 2 * max`. Rút gọn điều kiện trước khi code giúp thuật toán từ `O(N^2)` xuống `O(N)`.
