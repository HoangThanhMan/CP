# Number Place (ABC327 C)

- **Nguồn:** https://atcoder.jp/contests/abc327/tasks/abc327_c
- **Độ khó:** ABC C
- **Tags:** `implementation` `grid` `validation`
- **Ngày giải:** 2026-07-29
- **Kết quả:** AC

## Đề bài (tóm tắt)

Cho lưới 9x9 đã điền đủ, kiểm tra nó có phải lời giải Sudoku hợp lệ không: mỗi hàng, mỗi cột, mỗi khối 3x3 đều chứa đủ 1..9.

## Quan sát

- Chỉ là kiểm tra, không phải giải Sudoku — 27 lần kiểm tra độc lập.
- Mỗi lần kiểm tra: gom 9 giá trị, xác nhận chúng là hoán vị của 1..9.

## Ý tưởng

Viết ba hàm `checkRow`, `checkCol`, `checkSquare`, mỗi hàm đánh dấu 9 giá trị rồi xác nhận 1..9 đủ mặt. Gọi lần lượt cho 9 hàng, 9 cột, 9 khối.

## Độ phức tạp

- Thời gian: `O(9*9)`
- Bộ nhớ: `O(9)`

## Cạm bẫy

- Khối 3x3 bắt đầu ở `(i, j)` với `i, j` chia hết cho 3 — dễ lặp sai chỉ số góc trên trái.
- Kiểm tra 'đủ 1..9' chắc hơn là 'không trùng', vì bắt được cả giá trị ngoài miền.

## Bài học

Bài kiểm-tra-hợp-lệ: tách thành các hàm nhỏ theo từng loại ràng buộc. Ngắn, dễ đọc, dễ soát.
