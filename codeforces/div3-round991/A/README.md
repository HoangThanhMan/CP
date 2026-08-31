# Codeforces Round 991 Div3 — A

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 A
- **Tags:** `greedy` `prefix-sum`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Cho `n` chuỗi và giới hạn `m`. Lấy các chuỗi theo thứ tự cho tới khi tổng độ dài vượt `m`; đếm số chuỗi lấy được.

## Ý tưởng

Cộng dồn độ dài, dừng khi vượt `m`, in số chuỗi đã cộng.

## Độ phức tạp

- Thời gian: `O(tổng độ dài)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Thứ tự đọc `cin >> n >> m` phải khớp thứ tự trong đề — code khai báo `int m, n` nhưng đọc `cin >> n >> m`, dễ gây nhầm khi đọc lại. Nên đặt tên biến theo đúng thứ tự.

## Bài học

Tiền tố + ngưỡng = một vòng cộng dồn với `break`. Đơn giản, nhưng nhớ kiểm tra ngưỡng **trước** khi tăng bộ đếm.
