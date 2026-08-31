# Odd One Out (1915A)

- **Nguồn:** <dán link đề bài>
- **Độ khó:** Div4 A
- **Tags:** `implementation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho ba số trong đó có đúng hai số bằng nhau, in ra số còn lại.

## Ý tưởng

Ba phép so sánh: `a==b` -> in `c`; `a==c` -> in `b`; ngược lại in `a`.

## Độ phức tạp

- Thời gian: `O(1)`
- Bộ nhớ: `O(1)`

## Cạm bẫy

- Mẹo gọn hơn: `a ^ b ^ c` — hai số giống nhau XOR triệt tiêu, còn lại số lẻ loi.

## Bài học

XOR triệt tiêu các cặp giống nhau. Mẹo này giải luôn cả bài 'Single Number' của LeetCode.
