# The Bucket List

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `difference-array` `sweep` `intervals`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

N con bò, mỗi con cần `b` cái xô trong khoảng thời gian `[s, t)`. Tìm số xô nhiều nhất cần cùng lúc.

## Quan sát

- Đây chính là bài 'số khoảng chồng nhau nhiều nhất', bản có trọng số.
- Thời gian chỉ tới 1000 nên dùng mảng hiệu (difference array) là gọn nhất.

## Ý tưởng

Mảng `change[]`: `change[s] += b`, `change[t] -= b`. Quét thời gian từ 0 tới max, cộng dồn `change` để có số xô đang dùng, lấy max.

## Độ phức tạp

- Thời gian: `O(T + N)`
- Bộ nhớ: `O(T)`

## Cạm bẫy

- **Code hiện tại dùng `=` thay vì `+=`** — hai con bò bắt đầu cùng thời điểm sẽ đè lên nhau. Cần sửa.
- Chú ý khoảng đóng hay mở ở đầu mút: bò trả xô lúc `t` thì trừ tại `t`, không phải `t+1`.

## Bài học

Mẫu difference array: `+v` ở đầu, `-v` ở cuối, cộng dồn để lấy giá trị tại từng điểm. Khi miền thời gian lớn thì thay mảng bằng sắp xếp sự kiện, ý tưởng y hệt.
