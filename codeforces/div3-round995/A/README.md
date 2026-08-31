# Codeforces Round 995 Div3 — A

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div3 A
- **Tags:** `greedy` `implementation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Hai mảng `a` và `b`. Cộng dồn `a[i] - b[i+1]` khi hiệu dương, riêng phần tử cuối cộng nguyên `a[n-1]`.

## Ý tưởng

Một vòng duyệt với hai nhánh như mô tả trên.

## Độ phức tạp

- Thời gian: `O(N)`
- Bộ nhớ: `O(N)`

## Cạm bẫy

- Tổng dễ tràn `int` nếu `n` và giá trị đều lớn — nên `long long`.
- *(File này trước đây có dòng `:1` lạc do gõ nhầm trong vim nên không biên dịch được — đã sửa.)*

## Bài học

Bài tham lam một lượt: điều quan trọng là xác định đúng **phần tử cuối có xử lý khác không**. Đó thường là chỗ duy nhất có bẫy.
