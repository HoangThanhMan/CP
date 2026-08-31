# Codeforces Round 988 Div3 — B

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 B
- **Tags:** `math` `divisors` `brute-force`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Cho `k` số. Tìm hai phần tử trong dãy có tích bằng `k - 2`.

## Quan sát

- Duyệt từng phần tử `v[i]`, phần còn lại là `(k-2) / v[i]` — chỉ cần kiểm tra nó có trong dãy không.
- Trường hợp hai phần tử **bằng nhau** phải có ít nhất 2 bản sao.

## Ý tưởng

Đếm tần suất. Với mỗi `v[i]` chia hết `k-2`, kiểm tra `(k-2)/v[i]` có mặt; nếu hai số bằng nhau thì cần tần suất >= 2.

## Độ phức tạp

- Thời gian: `O(K log K)`
- Bộ nhớ: `O(K)`

## Cạm bẫy

- Xử lý trường hợp hai thừa số bằng nhau là chỗ dễ sót nhất — code đã có nhánh riêng.
- `v[i]` bằng 0 sẽ gây chia cho 0.

## Bài học

Tìm cặp có tích cho trước = với mỗi phần tử, tra 'phần bù nhân' trong bảng tần suất. Cùng ý với Two Sum, đổi phép cộng thành phép nhân.
