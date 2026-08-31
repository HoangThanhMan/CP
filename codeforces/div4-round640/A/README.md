# Codeforces Round 640 Div4 — A

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 A
- **Tags:** `math` `implementation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Tách một số thành tổng các số 'tròn' (mỗi số là một chữ số khác 0 nhân với luỹ thừa của 10). In số lượng và danh sách.

## Quan sát

- Mỗi chữ số khác 0 ở vị trí `k` cho một số tròn `chữ_số * 10^k`.
- Số chữ số khác 0 chính là số lượng cần in.

## Ý tưởng

Duyệt từng chữ số từ phải sang, giữ luỹ thừa `k`; chữ số khác 0 thì đẩy `chữ_số * k` vào kết quả.

## Độ phức tạp

- Thời gian: `O(số chữ số)`
- Bộ nhớ: `O(số chữ số)`

## Cạm bẫy

- Nhánh `(tmp == 10 ? 1 : tmp % 10)` là thừa và gây nhầm — `tmp % 10` đã đúng trong mọi trường hợp.
- Số có thể lớn, dùng `long long` cho an toàn.

## Bài học

Tách số theo chữ số: `tmp % 10` lấy chữ số, `tmp /= 10` đi tiếp, một biến luỹ thừa 10 chạy song song.
