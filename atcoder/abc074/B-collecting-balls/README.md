# Collecting Balls (ABC074 B)

- **Nguồn:** https://atcoder.jp/contests/abc074/tasks/abc074_b
- **Độ khó:** ABC B
- **Tags:** `math` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** CHƯA GIẢI — file code rỗng

> File rỗng, chưa có lời giải. Phần dưới là hướng làm để quay lại sau.

## Đề bài (tóm tắt)

N quả bóng nằm ở các toạ độ trên trục, có hai giỏ ở vị trí cố định. Mỗi quả bóng phải được mang về một trong hai giỏ; chi phí là quãng đường đi. Tìm tổng chi phí nhỏ nhất.

## Quan sát

- Mỗi quả bóng độc lập với các quả khác — không có ràng buộc chung.
- Với mỗi quả, chỉ cần chọn giỏ gần hơn.

## Ý tưởng

Cộng dồn `2 * min(khoảng cách tới giỏ 1, khoảng cách tới giỏ 2)` cho từng quả bóng (nhân 2 vì phải đi và về).

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(1)`

## Bài học

Khi các phần tử không ràng buộc lẫn nhau, bài toán tối ưu tổng thể rã thành N bài tối ưu độc lập.
