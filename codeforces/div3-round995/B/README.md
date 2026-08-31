# Codeforces Round 995 Div3 — B

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 B
- **Tags:** `math` `greedy` `cycles`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Ba giá trị `a`, `b`, `c` lặp lại theo chu kỳ. Tìm số bước ít nhất để tổng cộng dồn đạt `n`.

## Quan sát

- Một chu kỳ đầy đủ cộng `a + b + c` và tốn 3 bước -> lấy `n / (a+b+c)` chu kỳ trước.
- Phần dư `n % (a+b+c)` chỉ cần thêm 1, 2 hoặc 3 bước — xét ba trường hợp.

## Ý tưởng

`ans = 3 * (n / (a+b+c))`; với phần dư `val`, cộng thêm 1 nếu `a >= val`, 2 nếu `a+b >= val`, ngược lại 3.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Trường hợp `val == 0` phải xét riêng, không cộng thêm bước nào.
- `n` lớn thì `3 * (n / tổng)` có thể tràn `int`.

## Bài học

Bài lặp chu kỳ: chia lấy nguyên cho phần chu kỳ đầy đủ, rồi xử lý phần dư bằng vài trường hợp. Đừng mô phỏng từng bước.
