# Codeforces 1358C

- **Nguồn:** https://codeforces.com/problemset/problem/1358/C
- **Độ khó:** ?
- **Tags:** `sorting` `greedy`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Sắp xếp mảng rồi tìm từ phải sang chỉ số `i` lớn nhất thoả `v[i] <= i + 1`, in `i + 2`.

## Quan sát

- Sắp xếp trước là bước bắt buộc để điều kiện `v[i] <= i+1` có ý nghĩa.
- Mẫu này thường xuất hiện ở bài kiểu h-index: tìm `k` lớn nhất sao cho có ít nhất `k` phần tử thoả một ngưỡng.

## Ý tưởng

Sắp xếp tăng dần, duyệt ngược tìm `i` đầu tiên thoả `v[i] <= i + 1`, in `i + 2`; không có thì in 1.

## Độ phức tạp

- Thời gian: `O(N log N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Cần đối chiếu lại với đề vì các phép `+1`, `+2` rất dễ lệch một đơn vị.

## Bài học

Mẫu 'sắp xếp rồi tìm điểm mà giá trị vượt chỉ số' giải cả họ bài h-index. Vẽ ví dụ nhỏ ra giấy để chốt các `+1`.
