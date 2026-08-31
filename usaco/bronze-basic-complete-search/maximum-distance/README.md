# Maximum Distance

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `brute-force` `geometry`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho N điểm (toạ độ x và y đọc riêng thành hai dãy). Tìm bình phương khoảng cách Euclid lớn nhất giữa hai điểm bất kỳ.

## Quan sát

- `N` nhỏ nên duyệt hết `O(N^2)` cặp là được, không cần convex hull.
- Đề hỏi **bình phương** khoảng cách nên không cần `sqrt` — giữ nguyên số nguyên.

## Ý tưởng

Duyệt mọi cặp `(i, j)`, tính `dx*dx + dy*dy`, lấy max.

## Độ phức tạp

- Thời gian: `O(N^2)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Nguy cơ tràn `int`:** nếu toạ độ tới `10^9` thì `dx*dx` vượt `int`. Phải ép `long long` trước khi nhân. Code hiện tại đang để `int`.

## Bài học

Thấy phép nhân hai đại lượng cùng cỡ với input, phản xạ đầu tiên là ước lượng độ lớn kết quả rồi quyết định `long long`.
