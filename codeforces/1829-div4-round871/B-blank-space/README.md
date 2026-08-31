# Blank Space (1829B)

- **Nguồn:** https://codeforces.com/contest/1829/problem/B
- **Độ khó:** Div4 B
- **Tags:** `implementation` `arrays`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho dãy nhị phân, tìm đoạn số 0 liên tiếp dài nhất.

## Quan sát

- Đọc tới đâu xử lý tới đó, không cần lưu cả mảng.

## Ý tưởng

Giữ bộ đếm chuỗi 0 hiện tại: gặp 1 thì reset về 0, gặp 0 thì tăng và cập nhật max.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(1)`

## Bài học

Mẫu 'chuỗi liên tiếp dài nhất': một bộ đếm chạy + một biến max. Reset khi gặp phần tử phá vỡ.
