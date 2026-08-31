# Codeforces Round 991 Div3 — C

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 C
- **Tags:** `math` `divisibility` `brute-force`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Cho số dạng chuỗi. Được phép bình phương các chữ số 2 (thành 4, tổng tăng 2) và 3 (thành 9, tổng tăng 6). Hỏi có làm số chia hết cho 9 không.

## Quan sát

- Chia hết cho 9 chỉ phụ thuộc **tổng các chữ số**.
- Mỗi lần bình phương một chữ số 2 làm tổng tăng 2; một chữ số 3 làm tổng tăng 6.
- Vì làm việc mod 9, chỉ cần thử số lần trong khoảng 0..8 cho mỗi loại -> `9 * 9 = 81` tổ hợp.

## Ý tưởng

Đếm số chữ số 2 và 3 và tổng chữ số. Duyệt `i` (số chữ số 2 đem bình phương) và `j` (số chữ số 3), kiểm tra `(sum + 2i + 6j) % 9 == 0`.

## Độ phức tạp

- Thời gian: `O(|s| + 81)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Chặn `i, j` bởi cả số lượng có sẵn **và** 9 (vì mod 9 lặp lại sau 9 bước) — code làm đúng.
- Vòng `break` bên trong chỉ thoát vòng trong; ở đây vô hại vì có cờ `ok`.

## Bài học

Bài chia hết cho 9 (hoặc 3) luôn quy về tổng chữ số. Và khi làm việc mod `m`, chỉ cần duyệt `0..m-1` lần thay vì tới giới hạn thật.
