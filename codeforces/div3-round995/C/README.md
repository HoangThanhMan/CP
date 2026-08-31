# Codeforces Round 995 Div3 — C

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 C
- **Tags:** `implementation` `sets`
- **Ngày giải:** 2026-07-29
- **Kết quả:** Nghi chưa AC — xem Cạm bẫy

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Cho `n`, mảng `a` độ dài `m`, và tập `q` gồm `k` giá trị. Với mỗi phần tử của `a`, in '1' hoặc '0' theo một điều kiện liên quan tới việc tập `q` đã phủ gần hết `1..n` hay chưa.

## Quan sát

- Điều kiện trong code chỉ phụ thuộc `k` (kích thước tập) và việc `a[i]` có trong tập không, không phụ thuộc phần tử nào khác.

## Ý tưởng

Đánh dấu các phần tử của `q` vào map. Với mỗi `a[i]`, in '1' nếu `k == n`, hoặc `k == n-1` và `a[i]` không thuộc `q`.

## Độ phức tạp

- Thời gian: `O(N + M + K)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Code dùng `q.size()` thay vì `k`** — hai giá trị này bằng nhau ở đây nhưng dùng `k` rõ ràng hơn.
- Khởi tạo `mp[i] = 0` cho toàn bộ `1..n` mỗi test là `O(n log n)` không cần thiết; `vector<bool>` nhanh hơn nhiều.
- Cần đối chiếu lại điều kiện với đề — nó rất đặc thù.

## Bài học

Khi điều kiện chỉ phụ thuộc vài đại lượng tổng hợp, hãy viết chúng ra thành biến có tên rõ ràng trước khi ghép vào `if`.
