# Codeforces Round 998 Div3 — B

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 B
- **Tags:** `constructive` `sorting` `matrix`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

`n` hàng, mỗi hàng `m` số. Kiểm tra mỗi hàng sau khi sắp xếp có tạo thành cấp số cộng công sai `n` không; nếu có thì khôi phục thứ tự hàng ban đầu.

## Quan sát

- Sắp xếp từng hàng rồi kiểm tra hiệu liên tiếp bằng đúng `n` là điều kiện cần.
- Phần tử nhỏ nhất của mỗi hàng cho biết hàng đó thuộc vị trí nào.

## Ý tưởng

Sắp xếp từng hàng, kiểm tra công sai `n`; dùng map từ phần tử nhỏ nhất tới chỉ số hàng, duyệt map theo thứ tự tăng để in.

## Độ phức tạp

- Thời gian: `O(N*M log M)`
- Bộ nhớ: `O(N*M)`

## Cạm bẫy

- Khi phát hiện `ok = false` phải **dừng đọc input đúng cách** — `break` giữa chừng như code hiện tại làm lệch luồng đọc của các test sau. Đây là lỗi rất khó tìm.
- Nếu hai hàng có cùng phần tử nhỏ nhất thì map đè mất một hàng.

## Bài học

Trong bài nhiều test case, **không bao giờ thoát sớm khi chưa đọc hết input của test hiện tại**. Đặt cờ rồi vẫn đọc cho hết.
