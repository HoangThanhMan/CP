# Klee's SUPER DUPER LARGE Array!!! (2009E)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 E
- **Tags:** `binary-search` `math` `prefix-sum`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Mảng là dãy số liên tiếp `k, k+1, ..., k+n-1`. Chọn điểm cắt sao cho `|tổng trái - tổng phải|` nhỏ nhất.

## Quan sát

- Tổng tiền tố có công thức đóng: `S(m) = m(m+1)/2 - k(k-1)/2`.
- `tổng trái - tổng phải` **tăng đơn điệu** theo điểm cắt -> binary search tìm chỗ đổi dấu.
- Đáp án nằm ở một trong hai vị trí quanh chỗ đổi dấu — phải kiểm tra cả hai.

## Ý tưởng

Binary search điểm cắt `mid` đầu tiên mà `tổng trái > tổng phải`, rồi so `|hiệu|` tại `mid` và `mid-1`, lấy min.

## Độ phức tạp

- Thời gian: `O(log N)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- **Bắt buộc kiểm tra cả hai ứng viên** quanh điểm đổi dấu — chỉ lấy một là WA. Code làm đúng.
- `mid*(mid+1)/2` với `mid` cỡ `10^9` cho `10^18` — sát trần `long long`, phải cẩn thận.

## Bài học

Binary search trên hàm đơn điệu tìm điểm đổi dấu: đáp án tối ưu luôn nằm ở **một trong hai** vị trí kề chỗ đổi dấu. Luôn kiểm tra cả hai.
