# Codeforces Round 996 Div2 — A

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div2 A
- **Tags:** `math` `parity`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

> *(Chưa xác định chắc tên bài — mô tả dưới đây suy ra từ code, đối chiếu lại với link đề.)*

## Đề bài (tóm tắt)

Cho `n`, `a`, `b`. In YES nếu `|a - b|` chẵn, NO nếu lẻ.

## Quan sát

- Toàn bộ bài rút về **tính chẵn lẻ của hiệu**.
- Thường gặp ở dạng: mỗi thao tác thay đổi hai đại lượng cùng lúc, nên hiệu của chúng giữ nguyên tính chẵn lẻ — đó là bất biến.

## Ý tưởng

In YES khi `(a - b) % 2 == 0`.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- `n` được đọc nhưng không dùng — kiểm tra lại xem có bỏ sót ràng buộc nào của đề không.

## Bài học

Bài Div2 A rất hay có đáp án là một **bất biến chẵn lẻ**. Khi bí, hãy thử hỏi: 'thao tác này giữ nguyên đại lượng nào?'
