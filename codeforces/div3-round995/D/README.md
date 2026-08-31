# Codeforces Round 995 Div3 — D

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 D
- **Tags:** `two-pointers` `sorting` `counting`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Đếm số cặp `(i, j)` sao cho tổng mảng trừ đi `a[i] + a[j]` nằm trong `[x, y]`.

## Quan sát

- Điều kiện tương đương `sum - y <= a[i] + a[j] <= sum - x` — bài **đếm cặp có tổng trong khoảng**.
- Sau khi sắp xếp, đếm cặp có tổng `<= K` làm được bằng two pointers `O(N)`.
- Đáp án = (số cặp tổng <= sum-x) − (số cặp tổng < sum-y).

## Ý tưởng

Sắp xếp mảng. Viết hàm `countAtMost(K)` bằng two pointers, rồi lấy hiệu hai lần gọi.

## Độ phức tạp

- Thời gian: `O(N log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Code hiện tại dùng hai vòng lồng nhau với `break`** — trường hợp xấu vẫn là `O(N^2)`, dễ TLE.
- Tổng mảng phải là `long long` — code đã đúng.
- Đếm cặp `(i, j)` không thứ tự thì phải tránh đếm hai lần.

## Bài học

'Đếm cặp có tổng trong đoạn [L, R]' = `f(R) - f(L-1)` với `f(K)` = số cặp tổng `<= K`, tính bằng two pointers sau khi sắp xếp. Mẫu chuẩn, nhớ kỹ.
