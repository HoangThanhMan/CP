# Tax Rate (SMBC PC 2019 B)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** B
- **Tags:** `math` `brute-force`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Giá sau thuế 8% (làm tròn xuống) là N. Tìm giá trước thuế X, hoặc in `:(` nếu không tồn tại.

## Quan sát

- `floor(X * 1.08) == N` -> X nằm quanh `N / 1.08`. Chỉ cần thử vài ứng viên quanh đó.
- Cách chắc chắn nhất: duyệt X từ 1 tới khoảng `N` (N nhỏ) và kiểm tra trực tiếp.

## Ý tưởng

Tính `X0 = N * 100 / 108`, thử `X0` và `X0 + 1`, kiểm tra `floor(X * 108 / 100) == N`. Không thoả thì in `:(`.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- **Đừng dùng `(int)(res * 1.08)`** như code hiện tại — nhân số thực rồi ép kiểu sẽ sai làm tròn ở các giá trị biên. Dùng số nguyên: `X * 108 / 100`.
- Nên thử cả `X0 - 1` cho chắc.

## Bài học

Mọi bài 'phần trăm' đều nên chuyển sang số nguyên (`* 108 / 100`) thay vì nhân `1.08`. Làm tròn số thực là nguồn WA kinh điển.
