# Codeforces Round 991 Div3 — B

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 B
- **Tags:** `math` `parity` `invariant`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Thao tác cho phép chỉ thay đổi phần tử ở khoảng cách 2, nên các vị trí chẵn và lẻ tạo thành hai nhóm độc lập. Hỏi có làm mọi phần tử bằng nhau không.

## Quan sát

- Thao tác bảo toàn **tổng của mỗi nhóm** (chẵn và lẻ riêng).
- Muốn mọi phần tử bằng `x` thì cả hai nhóm phải có trung bình đúng bằng `x`.
- Đây lại là một bài **bất biến**.

## Ý tưởng

Tính tổng và số lượng của nhóm chỉ số chẵn và nhóm chỉ số lẻ. In YES nếu cả hai tổng chia hết cho số lượng tương ứng **và** hai trung bình bằng nhau.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Phải kiểm tra chia hết trước khi so sánh thương, nếu không phép chia nguyên sẽ che mất trường hợp sai.
- Nhóm rỗng (khi `n = 1`) gây chia cho 0.

## Bài học

Thao tác chỉ nối các vị trí cùng tính chẵn lẻ -> bài rã thành hai bài độc lập. Tìm bất biến (ở đây là tổng mỗi nhóm) là chìa khoá.
