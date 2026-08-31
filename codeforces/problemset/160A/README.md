# Twins (160A)

- **Nguồn:** https://codeforces.com/problemset/problem/160/A
- **Độ khó:** 800
- **Tags:** `greedy` `sorting`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho các đồng xu, lấy ít đồng nhất sao cho tổng lấy được **lớn hơn** tổng còn lại.

## Quan sát

- Tham lam: luôn lấy đồng lớn nhất trước — đạt ngưỡng bằng ít đồng nhất.
- Điều kiện là `tổng lấy > tổng còn lại`, tức `tổng lấy > tổng_toàn_bộ / 2`.

## Ý tưởng

Sắp xếp giảm dần, cộng dồn tới khi vượt nửa tổng, in số đồng đã lấy.

## Độ phức tạp

- Thời gian: `O(N log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- **Code dùng `double` cho `ave` và `sum`** — với tổng lớn sẽ sai. Nên so sánh bằng số nguyên: `2 * sum > total`.
- Điều kiện là **lớn hơn hẳn**, không phải lớn hơn hoặc bằng.

## Bài học

Muốn vượt ngưỡng bằng ít phần tử nhất thì lấy phần tử lớn nhất trước. Và nhân đôi thay vì chia đôi để tránh số thực.
