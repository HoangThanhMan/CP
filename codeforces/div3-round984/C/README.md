# Đếm mẫu "1100" với truy vấn cập nhật

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3
- **Tags:** `strings` `queries` `local-update`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Chuỗi nhị phân. Mỗi truy vấn đổi một ký tự, sau đó hỏi chuỗi có chứa mẫu `1100` không.

## Quan sát

- Đổi một ký tự ở vị trí `i` chỉ ảnh hưởng các mẫu bắt đầu tại `i-3 .. i` — **đúng 4 vị trí**.
- Vậy duy trì bộ đếm tổng số mẫu, mỗi truy vấn chỉ cần tính lại 4 vị trí đó.
- Đây là kỹ thuật **cập nhật cục bộ**: không quét lại cả chuỗi.

## Ý tưởng

Đếm số mẫu ban đầu bằng một lượt quét. Mỗi truy vấn: đếm mẫu ở 4 vị trí liên quan **trước** khi đổi, đổi ký tự, đếm lại **sau** khi đổi, cộng hiệu vào bộ đếm. Trả lời `cnt > 0`.

## Độ phức tạp

- Thời gian: `O(N + Q)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Phải bỏ qua truy vấn không đổi gì (`s[i]` đã bằng giá trị mới) — nếu không sẽ trừ nhầm. Code có kiểm tra, đúng.
- Hàm `check_1100` phải chặn biên cả hai đầu (`i < 0` và `i >= n-3`). Code làm đúng.

## Bài học

Truy vấn cập nhật một điểm + hỏi mẫu độ dài cố định `L` = chỉ cần tính lại `L` vị trí quanh điểm đó. Kỹ thuật 'trừ cũ cộng mới' này dùng được cho rất nhiều bài.
