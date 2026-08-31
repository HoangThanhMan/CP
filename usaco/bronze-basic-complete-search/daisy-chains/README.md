# Daisy Chains

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Bronze
- **Tags:** `brute-force` `prefix-sum`
- **Ngày giải:** 2023-12-31
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho dãy N số. Đếm số đoạn `[i, j]` mà trung bình cộng của đoạn bằng đúng một phần tử nào đó trong chính đoạn ấy.

## Quan sát

- `N <= 100`, số đoạn là `O(N^2)`, kiểm tra mỗi đoạn `O(N)` -> `O(N^3) = 10^6`, dư sức.
- Trung bình là `tổng / độ dài`. So sánh số thực rất dễ sai.

## Ý tưởng

Duyệt mọi cặp `(i, j)`, tính tổng đoạn, rồi kiểm tra xem có phần tử `v[k]` nào trong đoạn thoả `v[k] * (j - i + 1) == tổng` hay không.

## Độ phức tạp

- Thời gian: `O(N^3)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Đừng so sánh `double`.** Code hiện tại tính `avrg` kiểu `double` rồi `avrg == v[k]` — chỉ đúng nhờ số nhỏ, nhưng là thói quen nguy hiểm. Nhân chéo thành phép so sánh số nguyên: `v[k] * len == sum`.

## Bài học

Hễ thấy 'trung bình', hãy nhân chéo để về số nguyên thay vì chia — tránh sạch lỗi dấu phẩy động.
