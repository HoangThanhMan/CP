# Satyam and Counting (2009D)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 D
- **Tags:** `geometry` `counting` `sets`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Các điểm có toạ độ `y` chỉ bằng 0 hoặc 1. Đếm số tam giác vuông không suy biến tạo bởi ba điểm.

## Quan sát

- Với `y` chỉ có hai giá trị, tam giác vuông chỉ có hai dạng.
- Dạng 1: hai điểm cùng `x` (một ở `y=0`, một ở `y=1`) tạo cạnh **thẳng đứng**; điểm thứ ba là bất kỳ điểm nào khác -> `n - 2` cách.
- Dạng 2: góc vuông nằm ở một điểm, với hai điểm kề `x-1` và `x+1` ở tầng đối diện.

## Ý tưởng

Đếm số `x` có đủ cả hai điểm `(x,0)` và `(x,1)`, mỗi cái cộng `n - 2`. Rồi với mỗi điểm, kiểm tra sự tồn tại của `(x-1, 1-y)` và `(x+1, 1-y)`, cộng 1.

## Độ phức tạp

- Thời gian: `O(N log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Cẩn thận **đếm trùng** giữa hai dạng — cần kiểm tra lại với đề xem có giao nhau không.
- Đáp án cỡ `n^2` nên phải `long long`. Code dùng `long long ans`, đúng.

## Bài học

Ràng buộc mạnh (`y` chỉ có 2 giá trị) làm số hình dạng khả dĩ trở nên hữu hạn. Liệt kê đủ các dạng rồi đếm từng dạng — đừng cố tìm công thức chung.
