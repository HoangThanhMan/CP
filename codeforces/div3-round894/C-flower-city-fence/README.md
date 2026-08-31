# Flower City Fence (1862C)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 C
- **Tags:** `implementation` `symmetry`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Hàng rào gồm `n` cột chiều cao `a[i]` (không tăng). Hỏi hàng rào có bất biến khi lật (đổi vai trò trục ngang và trục dọc) không.

## Quan sát

- Lật hàng rào tương đương lấy **dãy liên hợp** (conjugate) của phân hoạch: `b[j] = số cột có chiều cao >= j`.
- Hàng rào bất biến khi và chỉ khi `a == b`.

## Ý tưởng

Tính `b[j] = số i mà a[i] >= j` (đếm bằng mảng đếm + tổng hậu tố), rồi so `a` với `b`.

## Độ phức tạp

- Thời gian: `O(N + maxA)`
- Bộ nhớ: `O(N + maxA)`

## Cạm bẫy

- Nếu `a[0] > n` thì chắc chắn NO — phải chặn trước khi cấp phát mảng `b`.
- **Code hiện tại nén dãy thành danh sách các điểm gãy `coor` rồi so đối xứng** — cách này khó soát và có vẻ chưa xử lý hết trường hợp. Cách tính dãy liên hợp trực tiếp rõ ràng hơn nhiều.

## Bài học

Phân hoạch số nguyên có khái niệm **liên hợp** (đổi hàng thành cột). Nhận ra một bài là 'phân hoạch tự liên hợp' là xong bài.
