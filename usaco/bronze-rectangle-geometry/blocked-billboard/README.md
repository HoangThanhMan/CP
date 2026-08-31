# Blocked Billboard

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `geometry` `rectangles` `inclusion-exclusion`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Hai bảng quảng cáo (hình chữ nhật không giao nhau) bị một xe tải hình chữ nhật che. Tính tổng diện tích còn nhìn thấy.

## Quan sát

- Hai bảng **không giao nhau** — đây là điều kiện then chốt, nhờ nó chỉ cần trừ riêng từng bảng rồi cộng lại, không lo trừ trùng.
- Diện tích giao của hai hình chữ nhật trục chuẩn có công thức đóng.

## Ý tưởng

Diện tích giao của hai hình chữ nhật là `max(0, min(x2, x4) - max(x1, x3)) * max(0, min(y2, y4) - max(y1, y3))`. Đáp án = diện tích bảng 1 + bảng 2 − giao(bảng 1, xe) − giao(bảng 2, xe).

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Khi hai hình không giao nhau, hiệu toạ độ ra **âm** — phải kẹp về 0, đừng lấy `abs`. Code hiện tại xử lý bằng `if` rồi gán 0, đúng nhưng dài; `max(0, ...)` gọn hơn.
- Nếu đề không bảo đảm hai bảng rời nhau thì phải bù trừ giao ba hình.

## Bài học

Công thức giao hình chữ nhật trục chuẩn nên thuộc lòng — nó xuất hiện ở rất nhiều bài Bronze/Div4.
