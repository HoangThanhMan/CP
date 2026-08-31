# Qualification Simulator (CODE FESTIVAL 2016 B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** B
- **Tags:** `greedy` `simulation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

N thí sinh, mỗi người thuộc nước 'a' hoặc 'b'. Lấy tối đa `A + B` người đỗ, trong đó người nước 'b' chỉ được lấy tối đa B người. Với từng thí sinh theo thứ tự hạng, in Yes/No.

## Quan sát

- Xử lý theo thứ tự hạng, quyết định tham lam: cứ nhận nếu còn suất.
- Cần hai bộ đếm: tổng số đã nhận (chặn bởi `A+B`) và riêng số người 'b' (chặn bởi `B`).

## Ý tưởng

Duyệt từng thí sinh. Người 'a': nhận nếu tổng chưa đủ `A+B`. Người 'b': nhận nếu tổng chưa đủ `A+B` **và** số 'b' đã nhận chưa đủ `B`.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Code hiện tại giảm `--b` ngay trong biểu thức `if` — biến này bị giảm cả khi điều kiện tổng đã hỏng, dễ sinh lỗi. Nên tách điều kiện ra rồi mới cập nhật bộ đếm.

## Bài học

Đừng viết phép tăng/giảm biến bên trong điều kiện `if` có toán tử `&&` — thứ tự đánh giá ngắn mạch sẽ khiến bộ đếm sai một cách rất khó tìm.
