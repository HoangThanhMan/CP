# The Legend of Freya the Frog (2009C)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 C
- **Tags:** `math` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Ếch nhảy xen kẽ theo trục x rồi trục y, mỗi lần nhảy `0..k` đơn vị. Tìm số bước ít nhất để tới `(x, y)`.

## Quan sát

- Số bước tối thiểu theo mỗi trục là `ceil(x/k)` và `ceil(y/k)`.
- Vì bắt buộc xen kẽ bắt đầu bằng trục x: nếu `b >= a` thì tổng là `2b`; nếu `a > b` thì tổng là `2a - 1` (kết thúc bằng một bước x).

## Ý tưởng

`a = ceil(x/k)`, `b = ceil(y/k)`; in `2b` nếu `b >= a`, ngược lại `2a - 1`.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Nhảy `0` đơn vị được phép nên trục 'thừa' không tốn thêm bước thật — đó là lý do có công thức gọn này.
- `(x + k - 1) / k` cho phép chia làm tròn lên bằng số nguyên.

## Bài học

Bài xen kẽ hai loại bước: tính số bước cần cho từng loại rồi ghép, chú ý loại nào đi trước và có được kết thúc sớm không.
