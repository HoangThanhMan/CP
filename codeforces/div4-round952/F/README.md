# Final Boss (1985F)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 F
- **Tags:** `heap` `simulation` `binary-search`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Boss có `h` máu. `n` đòn đánh, đòn `i` gây `a[i]` sát thương và có thời gian hồi `c[i]` lượt. Mỗi lượt dùng tất cả đòn đang sẵn sàng. Tìm lượt boss chết.

## Quan sát

- Dùng min-heap theo 'lượt sẵn sàng tiếp theo' để nhảy thẳng tới lượt có đòn khả dụng, bỏ qua các lượt trống.
- Mỗi đòn được rút ra và đẩy lại `O(h / a[i])` lần, nên tổng số thao tác bị chặn.

## Ý tưởng

Đẩy `(0, i)` cho mọi đòn vào min-heap. Lặp: lấy hết các đòn có cùng lượt sẵn sàng nhỏ nhất, trừ tổng sát thương vào `h`, đẩy lại với lượt `+ c[i]`. Dừng khi `h <= 0`.

## Độ phức tạp

- Thời gian: `O((số lượt hữu ích) log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Cách này có thể quá chậm** khi sát thương nhỏ mà `h` lớn — lời giải chuẩn của bài là **binary search trên số lượt**, với hàm kiểm tra tính tổng sát thương trong `T` lượt là `sum(a[i] * (1 + (T-1)/c[i]))`.
- Tổng sát thương tràn `long long` rất nhanh trong hàm kiểm tra — phải kẹp lại khi vượt `h`.

## Bài học

Mô phỏng bằng heap trực quan nhưng số lượt có thể khổng lồ. Khi 'số lượt' là đại lượng cần tìm và sát thương tích luỹ đơn điệu -> **binary search trên đáp án**.
