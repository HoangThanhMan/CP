# Codeforces Round 996 Div2 — B

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div2 B
- **Tags:** `greedy` `math` `invariant`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Cho hai mảng `a` và `b`. Kiểm tra điều kiện: tổng `a` không nhỏ hơn tổng `b`, và `min(a[i] - b[i])` không nhỏ hơn `max(b[i] - a[i])` trên các vị trí mà `a[i] <= b[i]`.

## Quan sát

- Bài dạng 'có biến đổi được không' thường quy về một điều kiện tổng + một điều kiện biên.

## Ý tưởng

Tính `sum(a)`, `sum(b)`, `m = min(a[i]-b[i])` và `M = max(b[i]-a[i])` trên các `i` có `a[i] <= b[i]`. In NO nếu `sum(a) < sum(b)` hoặc `m < M`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- `ll m = 10e9` là `10^10` chứ không phải `10^9` — dùng `LLONG_MAX` hoặc hằng có tên rõ ràng sẽ tránh nhầm lẫn kiểu này.
- Cần đối chiếu lại điều kiện thứ hai với đề, nó không hiển nhiên.

## Bài học

Bài 'biến đổi mảng này thành mảng kia': tìm đại lượng bảo toàn (thường là tổng) làm điều kiện cần, rồi tìm điều kiện đủ ở mức từng phần tử.
